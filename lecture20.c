// คำสั่ง break และ continue ใน Loop
// break ใน Loop ทำงานเมื่อใด ออกจาก Loop ทันที (คือจบการทำงานซ้ำๆ นั้นทันที)
// continue ใน Loop ทำงานเมื่อใด ถือว่าจบรอบนั้น ให้ไปรอบต่อไปทันทีโดยที่ไม่สนใจคำสั่งใดๆ ใน Loop

#include <stdio.h>

void main(){
  int i;

  for(i = 1 ;  i <= 10 ; i = i + 1){
    printf("Hello....\n");
    if(i == 5){
      continue;
    }
    printf("Hi....\n");
  }

}