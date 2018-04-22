#pragma once
#include "stdafx.h"
HMODULE LoadLibraryByRemoteServer(
    __in LPCWSTR lpLibPath,
    __in LPCWSTR lpUsername,
    __in LPCWSTR lpPassword
);

BOOL FreeLibraryByRemoteServer(
    __in HMODULE hRemoteLib
);