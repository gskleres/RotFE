%echo off

call %~dp0\buildeditor.bat

call "%BUILD_BAT%" %PROJECT% Win64 Development "%UPROJECT_PATH%" -waitmutex -NoHotReload

call "%UE4EDITOR_CMD_EXE%" "%UPROJECT_PATH%" -run=cook -targetplatform=WindowsNoEditor