
call %~dp0\vars.bat

call "%BUILD_BAT%" %PROJECT%Editor Win64 Development "%UPROJECT_PATH%" -waitmutex -NoHotReload

REM "c:\Applications\Epic Games\UE_4.26\Engine\Build\BatchFiles\Build.bat" RotFEEditor Win64 Development c:\Projects\RotFE\RotFE\RotFE.uproject -waitmutex -NoHotReload