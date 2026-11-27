-- set required xmake version
set_xmakever("2.8.2")

-- includes (need xmake.lua file in the same directory)
includes("lib/commonlibsse")
includes("extern/styyx-utils")

local mod_name = "er-equipload"  -- DLL name; also the FUCK plugin name (src/plugin-info.h)

set_project(mod_name)
set_version("1.0.0")
set_license("GPL-3.0")

-- language and warnings
set_languages("c++23")
set_warnings("allextra")

-- build modes
add_rules("mode.debug", "mode.releasedbg")
set_defaultmode("releasedbg")

-- reproducible dependencies: xmake writes xmake-requires.lock on first configure; commit it
set_policy("package.requires_lock", true)

add_rules("plugin.compile_commands.autoupdate", {outputdir = ".vscode"}) -- clangd / CLion / VS Code
-- Visual Studio solution on demand: `xmake project -k vsxmake` (no longer regenerated every build)
includes("xmake-rules.lua")

-- Skyrim AE 1.6.1170 only. The exact runtime is enforced at load time in src/plugin-info.h.
set_config("skyrim_ae", true)
set_config("rex_toml", true)
set_config("use-hook-utils", true)
set_config("use-fuck", true)

-- `xmake f --werror=y`: treat warnings as errors in this project's sources. Dependency headers
-- included with <...> (CommonLib, styyx-utils, packages) are compiled as external, warning-free.
option("werror")
    set_default(false)
    set_showmenu(true)
    set_description("Treat warnings in this project's sources as errors")
option_end()

add_requires("doctest")

-- the SKSE plugin
target(mod_name)
    add_deps("commonlibsse", {public = true})
    add_deps("styyx-util", {public = true})

    set_targetdir("build/skse/plugins")

    add_rules("er-equipload.plugin", {
        name = mod_name,
        author = "asx",
        description = "Only equipped items count towards carry weight and over-encumbrance."
    })

    add_files("src/**.cpp")
    add_headerfiles("src/**.h")
    add_includedirs("src")
    set_pcxxheader("src/pch.h")
    add_options("werror")
    if has_config("werror") then
        add_cxflags("/WX", "/external:anglebrackets", "/external:W0", {tools = {"cl", "clang_cl"}})
    end

    after_build(function(target)
        local plugins = path.join(os.projectdir(), "Distr", "SKSE", "Plugins")
        os.mkdir(plugins)
        os.trycp(target:targetfile(), plugins)
        os.trycp(target:symbolfile(), plugins)
        os.trycp("$(projectdir)/release/**.toml", plugins)
    end)

-- engine-independent unit tests: `xmake build er-equipload-tests && xmake run er-equipload-tests`
-- They compile without CommonLib, so they also build with any host compiler.
target("er-equipload-tests")
    set_kind("binary")
    set_default(false)
    add_packages("doctest")
    add_includedirs("src")
    add_files("tests/*.cpp")
    set_rundir("$(projectdir)")
    if is_plat("windows") then
        add_cxflags("/utf-8")
    end
