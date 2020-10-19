#!/bin/bash
# ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : James Hopbourn
#   Email         : JamesHopbourn@gmail.com
#   File Name     : build.sh
#   Last Modified : 2020-09-05 19:56
#   Describe      : 《C 语言程序设计教程》自动化编译脚本
#   Manual        : 命令行输入数字参数编译数字开头的源文件，如果不加任何参数默认全部重新编译。
# ====================================================

if ! [ -x "$(command -v clang)" ]; then
  echo 'clang is not installed' >&2
  exit 1
fi

if ! [ -x "$(command -v clang-format)" ]; then
  echo 'clang-format is not installed' >&2
  exit 1
fi

find . -maxdepth 1 -type f -iname "*.txt" -delete
find . -maxdepth 1 -type f -iname "*.out" -delete
find . -maxdepth 1 -type f -not -iname "*.*" -delete
find ./build -maxdepth 1 -type f -not -iname "*.*" -delete

echo -e "Start compiling...\n"
for file in $(find . -maxdepth 1 -name "$1*.c"|sort -g|xargs /usr/bin/basename)
do {
    mkdir -p ./build
    filename=`echo "$file"|awk -F . '{print $1}'`
    clang-format -i $file -style=file
    clang $file -o ./build/$filename > /dev/null 2>&1
    if [[ $? = '0' ]]; then
    	echo -e "\033[32mcompiling code $file...yes\033[0m"
    else
    	echo -e "\033[31mcompiling code $file...faild\033[0m"
    fi
}
done
echo -e "\nCompile done"

if [[ $1 != '0' ]]; then
	echo -e "\n\033[32mExecute result\033[0m"
	./build/$1*
    exit 0
fi
