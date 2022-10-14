#include <stdio.h>

void main()
{
    int a;
    printf("Give the value of a\n");
    scanf("%d", &a);

    a += 5;
    printf("a=%d\n", a);

    a -= 5;
    printf("a=%d\n", a);

    a *= 5;
    printf("a=%d\n", a);

    a /= 5;
    printf("a=%d\n", a);

    a %= 5;
    printf("a=%d\n", a);
}