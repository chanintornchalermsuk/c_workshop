// Control Statement (Loop) คือ การทำงานเดิมๆ ซ้ำ 
// มีคำสั่งที่ใช้อยู่ 3 คำสั่ง คือ while, do-while, for

// ตย. โปรแกรมแสดงข้อความ Hello... ทางหน้าจอ 5 ข้อความ

#include <stdio.h>

void main(){
  // printf("Hello...");
  // printf("Hello...");
  // printf("Hello...");
  // printf("Hello...");
  // printf("Hello...");

  // int x;
  // x = 10;
  // while( x < 20){
  //   printf("Hello...");
  //   x = x + 2;
  // }

  // int y;
  // y = 1;
  // do{
  //   printf("Hello...");
  //   y = y + 1;
  // }while( y <= 5 );

  int z;
  for(z = 50 ; z > 25 ; z = z - 5){
    printf("Hello...");
  } 
  
}