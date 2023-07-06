#include <unistd.h>

void _putchar(char ch, int file)
{
    write(file, &ch, 1);
}
