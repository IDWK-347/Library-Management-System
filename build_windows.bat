@echo off
REM Windows编译脚本

gcc main.c data.c logic.c store.c user.c terminal.c -o main.exe -I. -luser32

if %errorlevel% equ 0 (
    echo 编译成功！
    echo 运行程序: main.exe
) else (
    echo 编译失败！
)
pause