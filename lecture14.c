//Control Statement : if พิสูจน์/ตรวจสอบครั้งเดียวจริงทำ เท็จไม่ทำ

//ตย. พิสูจน์ตัวเลขที่รับจากผู้ใช้งานว่ามากกว่า 0 หรือไม่ หากมากกว่า 0 จริง ให้แสดงข้อความ "Positive number"

#include <stdio.h>

void main( ){
    int number;

    printf("Input number : ");
    scanf( "%d" , &number   );

    if(  number > 0  ){
        printf("Positive number");
    }

}

