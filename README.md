# get_next_line

## Contents

1. [Project Overview](#1-Project-overview)
2. [Logic](#2-Logic)
3. [Bonus](#3-Bonus)
4. [How to run](#4-How-to-run)

## 1. Project overview

For this project, I set out to create get_next_line(), a function that reads a line from a file descriptor. The goal was to develop a reliable way to read text files or standard input line by line, a feature that isn’t built into C by default. This challenge introduced me to static variables, a key concept for maintaining state across multiple function calls.

## 2. Logic

My get_next_line() function reads a file descriptor and returns one line at a time, including the newline character when applicable. If there’s nothing left to read or an error occurs, it returns NULL. The function works dynamically, meaning it doesn’t load the entire file into memory at once but reads small chunks using a BUFFER_SIZE defined at compilation.

## 3. Bonus

The bonus for this project consisted of the following:

Managing multiple file descriptors simultaneously – If I read from different files in alternating calls, my function kept track of the reading state for each descriptor without mixing them up. The final part of the bonus was to use only one static variable.

## 4. How to run
```
git clone https://github.com/dhuss42/get_next_line.git get_next_line
cd get_next_line
```

Ordinary test
```
cc -Wall -Werror -Wextra get_next_line.c get_line_utils.c ./tests/main.c -o get_next_line
./get_next_line
```

Bonus test
```
cc -Wall -Werror -Wextra get_next_line_bonus.c get_next_line_utils_ests/main_bonus.c -o get_next_line_bonus
./get_next_line_bonus
```
