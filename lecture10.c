//input statement
//getchar() -> stdio.h  รับตัวอักษร 1 ตัว
//getch() -> stdio.h    รับตัวอักษร 1 ตัว
//getche() -> stdio.h   รับตัวอักษร 1 ตัว

#include <stdio.h>

int main( ){
    char xx, yy, zz;

    printf("Input xx value :");
    xx = getchar(); 
    putchar(xx);

    printf("\n------------------------\n");

    printf("Input yy value :");
    yy = getch(); 
    putchar(yy);

    printf("\n------------------------\n");

    printf("Input zz value :");
    zz = getche(); 
    putchar(zz);

    return 0;
}