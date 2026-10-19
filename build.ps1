# xmake project -k compile_commands
xmake
$source = "Distr\AE\SKSE"
# $destination = "D:\Games\Mods\SE\MO2\mods\er-equipload\"
$destination = "Z:\Games\Mods\SE\MO3\mods\er-equipload\"

Copy-Item -Path $source -Destination $destination -Recurse -Force