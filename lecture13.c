#include "stdio.h"

void main()
{
    int a = 10;
    int b;

    b = ++a;
    printf("A = %d\n", a); // A = 11
    printf("B = %d\n", b); // B = 11
    printf("--------------\n");

    b = a++;
    printf("A = %d\n", a); // A = 12
    printf("B = %d\n", b); // B = 11
    printf("--------------\n");

}