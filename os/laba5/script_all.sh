#!/bin/bash

echo $0

echo $UID
echo $USER
echo $BASH
echo $HOME
echo $PATH
echo $PS1
echo $PS2
echo $PWD
echo $HOSTNAME
echo $SECONDS

cd $HOME && cat ~/study/os/lab4/f3

printf "Введите команду: " && read command

printf "Введите команду: " && read command && eval "${command:?Ошибка: команда не введена}"
