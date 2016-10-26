:: This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\targets\android\build.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0flight_site\app\src\main"
set ANT_DIR=C:\Users\rashad\AppData\Local\Fusetools\Fuse\Android\Ant
set JAVA_HOME=C:\Program Files\Java\jdk1.8.0_40
set SUPPORT_JAR="C:/Users/rashad/AppData/Local/Fusetools/Fuse/Android/AndroidSDK\extras\android\support\v4\android-support-v4.jar"

echo ## 1/2: libflight_site.so
call makew -s -j %NUMBER_OF_PROCESSORS% %* || goto ERROR

echo.
if exist %SUPPORT_JAR%  (
   C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\uno.exe cp %SUPPORT_JAR% libs\android-support-v4.jar || goto ERROR
) else (
    echo ERROR: supportv4.jar was not found. Please run 'fuse install android' in your shell and then restart your build
    echo ERROR: expected jar at %SUPPORT_JAR%
    goto ERROR
)

echo.
echo ## 2/2: flight_site.apk
if exist "%ANT_DIR%\bin\ant.bat" (
    set "ANT=%ANT_DIR%\bin\ant.bat"
) else (
    echo ERROR: ant.bat was not found in "%ANT_DIR%\bin"
    goto ERROR
)

call "%ANT%" debug || goto ERROR

cd "%~dp0"
C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\uno.exe cp flight_site/app/src/main/bin/flight_site-debug.apk flight_site.apk || goto ERROR

popd && exit /b 0

:ERROR
popd && exit /b 1
