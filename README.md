0x11.C-printf
Description
printf is the C language function to do formated printing.
Authorized functions and macros
-write (man 2 write)
-malloc (man 3 malloc)
-free (man 3 free)
-va_start (man 3 va_start)
-va_end (man 3 va_end)
-va_copy(man 3 va_copy)
-va_arg (man 3 va_arg)
Compilation
your code will be compiled using $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
Tasks
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format using the following conversion specifiers:
-c
-s
-%
1. Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:
-d
-i
2. Just because it's in print doesn't mean it's the gospel
create a man page for your function
3. With a face like mine, I do better in print
Handle the following custom conversion specifiers:
-b: the unsigned int argument is converted to binary
