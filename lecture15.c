//Control Statement : if-else พิสูจน์/ตรวจสอบครั้งเดียวจริงทำอย่าง เท็จทำอีกอย่าง

//ตย. พิสูจน์ตัวเลขที่รับจากผู้ใช้งานว่ามากกว่า 0 หรือไม่ หากมากกว่า 0 จริง ให้แสดงข้อความ "Positive number" หากตั้งแต่ 0 ลงมา ให้แสดงข้อความ "Negative number"

#include <stdio.h>

void main( ){
    int number;

    printf("Input number : ");
    scanf( "%d" , &number   );

    if(  number > 0  ){
        printf("Positive number");
    }else{
        printf("Negative number");
    }

}

