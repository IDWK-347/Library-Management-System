#!/bin/bash
# Linux/Mac编译脚本

gcc main.c data.c logic.c store.c user.c terminal.c -o main -I.

if [ $? -eq 0 ]; then
    echo "编译成功！"
    echo "运行程序: ./main"
else
    echo "编译失败！"
fi