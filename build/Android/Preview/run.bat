:: This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\targets\android\run.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off

if "%1" == "debug" (
    echo Opening Android Studio
    C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\uno.exe open -a"Android Studio" "%~dp0flight_site"
    exit /b %ERRORLEVEL%
)

C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\uno.exe launch-apk "%~dp0flight_site.apk" ^
    --package=com.apps.flight_site ^
    --activity=flight_site ^
    --sym-dir="%~dp0flight_site\src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
