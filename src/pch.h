#pragma once

// Precompiled header: heavy, stable third-party headers only, to speed up builds. Project
// headers include what they use and do not rely on this file.

#ifndef NOMINMAX
#define NOMINMAX // defensive: keep <windows.h>, if any dependency pulls it in, from defining min/max
#endif

#include <RE/Skyrim.h>

#include <SKSE/SKSE.h>

#include <SimpleIni.h> // must precede FUCK_API.h (via styyx-utils), which uses CSimpleIniA undeclared
#include <styyx-utils.h>
