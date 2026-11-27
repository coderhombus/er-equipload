#pragma once

// Precompiled header: heavy, stable third-party headers only, to speed up builds. Project
// headers include what they use and do not rely on this file.

#define NOMINMAX // defensive: keep <windows.h>, if any dependency pulls it in, from defining min/max

#include <RE/Skyrim.h>

#include <SKSE/SKSE.h>

#include <SimpleIni.h> // must precede FUCK_API.h (via styyx-utils), which uses CSimpleIniA undeclared
#include <styyx-utils.h>

// Transitional: the sources still use these unqualified; removed when they are restructured.
using namespace StyyxUtil;
