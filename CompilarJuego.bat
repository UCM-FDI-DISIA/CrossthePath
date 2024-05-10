@echo off

call ActualizarMotor.bat

set GAMEDLLFOLDERS=.\bin
set sourceFolder=.\EDEN\bin\assets
set destinationFolder=.\bin\assets

for %%i in (".\EDEN\bin\*") do (
        XCOPY /y "%%i" %GAMEDLLFOLDERS%
)

xcopy "%sourceFolder%\*" "%destinationFolder%\" /E /Y

msbuild "CrossthePath.sln" /p:configuration=Debug /p:Platform=x64
msbuild "CrossthePath.sln" /p:configuration=Release /p:Platform=x64