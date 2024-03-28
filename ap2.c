#include <stdio.h>
 #include <stdlib.h>
 void main()
 {
 int list[5];
 int *plist[5];
 list[0] = 10; //리스트 0번째 배열을 10으로 설정
 list[1] = 11; //리스트 1번째 요소를 11로 설정
 plist[0] = (int*)malloc(sizeof(int)); //plist를 heap영역에 할당
 printf("----[신혜원] [2023041057]----\n");
 printf("list[0] \t= %d\n", list[0]); //list 0번째 배열의 값
 printf("list \t\t= %p\n", list); //list 0번째 배열의 주소
 printf("&list[0] \t= %p\n", &list[0]); //list 0번째 배열의 주소
 printf("list + 0 \t= %p\n", list+0); //list 0번째 배열의 주소
 printf("list + 1 \t= %p\n", list+1); //list 1번째 배열의 주소
 printf("list + 2 \t= %p\n", list+2); //list 2번째 배열의 주소
 printf("list + 3 \t= %p\n", list+3); //list 3번째 배열의 주소
 printf("list + 4 \t= %p\n", list+4); //list 4번째 배열의 주소
 printf("&list[4] \t= %p\n", &list[4]); //list 4번째 배열의 주소
 free(plist[0]);
 }