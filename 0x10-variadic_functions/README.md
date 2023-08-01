Working on a Variadic functions project.

What i learnt:
What are variadic functions
How to use va_start, va_arg and va_end macros
Why and how to use the const type qualifier

Tasks
Task 0

Beauty is variable, ugliness is constant
Write a function that returns the sum of all its parameters.

Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0

Task 1

To be is to be the value of a variable
Write a function that prints numbers, followed by a new line.

Prototype: void print_numbers(const char *separator, const unsigned int n, ...);

Task 2
One woman's constant is another woman's variable
Write a function that prints strings, followed by a new line.

Prototype: void print_strings(const char *separator, const unsigned int n, ...);

Task 3
To be is a to be the value of a variable
Write a function that prints anything.

Prototype: void print_all(const char * const format, ...);
