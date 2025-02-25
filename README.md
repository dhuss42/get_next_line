#get_next_line

For this project, I set out to create get_next_line(), a function that reads a line from a file descriptor. The goal was to develop a reliable way to read text files or standard input line by line, a feature that isn’t built into C by default. This challenge introduced me to static variables, a key concept for maintaining state across multiple function calls.

##How It Works

My get_next_line() function reads a file descriptor and returns one line at a time, including the newline character when applicable. If there’s nothing left to read or an error occurs, it returns NULL. The function works dynamically, meaning it doesn’t load the entire file into memory at once but reads small chunks using a BUFFER_SIZE defined at compilation.

##Bonus Features

Once I completed the mandatory part, I implemented bonus features:

Managing multiple file descriptors simultaneously – If I read from different files in alternating calls, my function keeps track of the reading state for each descriptor without mixing them up.
Using only one static variable – This required careful memory management to avoid leaks while ensuring smooth operation across different calls.
