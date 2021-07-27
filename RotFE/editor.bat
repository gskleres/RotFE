%echo off

call %~dp0\vars.bat

start "" "%UE4EDITOR_EXE%"  "%UPROJECT_PATH%" %s

REM "c:\Applications\Epic Games\UE_4.26\Engine\Build\BatchFiles\Build.bat" RotFEEditor Win64 Development c:\Projects\RotFE\RotFE\RotFE.uproject -waitmutex -NoHotReload