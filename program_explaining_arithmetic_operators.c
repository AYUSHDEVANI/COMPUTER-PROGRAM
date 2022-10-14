// Program illustrating use of arithmetic operators. The numbers x and y are initialized in the program itself with x = 25 and y = 4

#include <stdio.h>
void main()

{
    int x = 25;
    int y = 4;

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    printf("%d %% %d = %d\n", x, y, x % y);
}