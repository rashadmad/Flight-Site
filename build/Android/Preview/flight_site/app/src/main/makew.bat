:: This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\targets\android@(Project.Name)\app\src\main\makew.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0"
setlocal EnableDelayedExpansion
set NDK_DIR=C:\Users\rashad\AppData\Local\Fusetools\Fuse\Android\AndroidNDK

if exist "%NDK_DIR%\prebuilt\windows\bin\make.exe" (
    set "MAKE=%NDK_DIR%\prebuilt\windows\bin\make.exe"
) else if exist "%NDK_DIR%\prebuilt\windows-x86_32\bin\make.exe" (
    set "MAKE=%NDK_DIR%\prebuilt\windows-x86_32\bin\make.exe"
) else if exist "%NDK_DIR%\prebuilt\windows-x86_64\bin\make.exe" (
    set "MAKE=%NDK_DIR%\prebuilt\windows-x86_64\bin\make.exe"
) else (
    echo ERROR: make.exe was not found in "%NDK_DIR%"\prebuilt\windows**"
    goto ERROR
)

if exist "%NDK_DIR%\toolchains\arm-linux-androideabi-4.9\prebuilt\windows" (
    set "TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.9\prebuilt\windows"
) else if exist "%NDK_DIR%\toolchains\arm-linux-androideabi-4.9\prebuilt\windows-x86_32" (
    set "TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.9\prebuilt\windows-x86_32"
) else if exist "%NDK_DIR%\toolchains\arm-linux-androideabi-4.9\prebuilt\windows-x86_64" (
    set "TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.9\prebuilt\windows-x86_64"
) else if exist "%NDK_DIR%\toolchains\arm-linux-androideabi-4.8\prebuilt\windows" (
    set "TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.8\prebuilt\windows"
) else if exist "%NDK_DIR%\toolchains\arm-linux-androideabi-4.8\prebuilt\windows-x86_32" (
    set "TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.8\prebuilt\windows-x86_32"
) else if exist "%NDK_DIR%\toolchains\arm-linux-androideabi-4.8\prebuilt\windows-x86_64" (
    set "TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.8\prebuilt\windows-x86_64"
) else (
    echo ERROR: GCC 4.9 or 4.8 was not found in "%NDK_DIR%\toolchains\arm-linux-androideabi-4.**"
    goto ERROR
)

set PATH=%TOOLCHAIN_DIR%\bin
"%MAKE%" %*
popd && endlocal && exit /b %ERRORLEVEL%

:ERROR
popd && endlocal && exit /b 1
