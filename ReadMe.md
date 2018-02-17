
How to debug
*  Change all path to your locals, .vscode/c_cpp_properties.json, runDebuggerServer.bat, launch.json
* Makefile CPP line appended "'-O0' '-g'"
* make sure this line is commented out in launch.json: debugServerPath
* run runDebuggerServer.bat
* Press F5

Reference:
https://os.mbed.com/questions/79289/How-to-get-vscode-debugging-working-with/