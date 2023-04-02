#!/bin/bash
echo "Do you have MinGW for compilation of CPP file into Machine code.(y/n)"
read userInput
if [ "$userInput" = 'y' ]; then
    echo "progressing...."
        g++ thermometry.cpp -o thermometry
        echo "Executing code..."
        start thermometry.exe
else
    echo "Follow https://www.youtube.com/watch?v=sXW2VLrQ3Bs to install MinGW. "
    start chrome https://www.youtube.com/watch?v=sXW2VLrQ3Bs 
fi
