@setlocal
call "%VS100COMNTOOLS%\vsvars32.bat" x86
qmake
nmake
move debug\HelloWorld.exe .
@endlocal