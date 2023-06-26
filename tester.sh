#!/bin/bash
directory="./error_files/"

echo ' ██████╗ ██████╗ ███╗   ██╗███████╗    ███████╗██╗██╗     ███████╗    ████████╗███████╗███████╗████████╗'
echo '██╔════╝██╔═══██╗████╗  ██║██╔════╝    ██╔════╝██║██║     ██╔════╝    ╚══██╔══╝██╔════╝██╔════╝╚══██╔══╝'
echo '██║     ██║   ██║██╔██╗ ██║█████╗      █████╗  ██║██║     █████╗         ██║   █████╗  ███████╗   ██║   '
echo '██║     ██║   ██║██║╚██╗██║██╔══╝      ██╔══╝  ██║██║     ██╔══╝         ██║   ██╔══╝  ╚════██║   ██║   '
echo '╚██████╗╚██████╔╝██║ ╚████║██║         ██║     ██║███████╗███████╗       ██║   ███████╗███████║   ██║   '
echo ' ╚═════╝ ╚═════╝ ╚═╝  ╚═══╝╚═╝         ╚═╝     ╚═╝╚══════╝╚══════╝       ╚═╝   ╚══════╝╚══════╝   ╚═╝   '


make
if [ $? -ne 0 ]; then
    exit
fi



for file in "$directory"*
do
    echo "----------------------------------------------------"
    echo $file
    ./miniRT $file
    echo "----------------------------------------------------"
done