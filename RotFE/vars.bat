@echo off

set ROOTDIR=%~dp0
set ROOTDIR=%ROOTDIR:~0,-1%

set PROJECT=RotFE

set PROJECT_DIR=%ROOTDIR%
set UPROJECT_PATH=%PROJECT_DIR%\%PROJECT%.uproject

set UE4_DIR=C:\Program Files\Epic Games\UE_4.26
set UE4EDITOR_EXE=%UE4_DIR%\Engine\Binaries\Win64\UE4Editor.exe
set UE4EDITOR_CMD_EXE=%UE4_DIR%\Engine\Binaries\Win64\UE4Editor-Cmd.exe
set BUILD_BAT=%UE4_DIR%\Engine\Build\BatchFiles\Build.bat
