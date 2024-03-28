 #include <stdio.h>
 #include <stdlib.h>
 void main()
 {
 int list[5];
 int *plist[5] = {NULL,};
 plist[0] = (int *)malloc(sizeof(int)); //plist를 heap영역에 할당
 list[0] = 1; //리스트의 0번째 배열을 1로 설정
 list[1] = 100; //리스트의 1번째 배열을 100으로 설정
 *plist[0] = 200; //plist가 가리키는 0번째 배열을 200으로 설정
 printf("----[신혜원] [2023041057]----\n");
 printf("list[0]            = %d\n", list[0]); //list의 0번째 배열에 들어있는 값 출력
 printf("&list[0]           = %p\n", &list[0]); //list 0번째 배열의 주소 값 
 printf("list               = %p\n", list); //list 배열의 이름은 배열의 시작 주소 값
 printf("&list              = %p\n", &list); //list의 주소 값= 0번쨰 배열의 주소 값
 printf("----------------------------------------\n\n");
 printf("list[1]            = %d\n", list[1]); //list의 1번쨰 배열에 들어있는 값
 printf("&list[1]           = %p\n", &list[1]); //list의 1번쨰 배열의 주소 값
 printf("*(list+1)          = %d\n", *(list + 1)); //list의 1번째 배열에 들어있는 값
 printf("list+1             = %p\n", list+1); //list+1이 역참조 하는 값
  printf("----------------------------------------\n\n");
 printf("*plist[0]          = %d\n", *plist[0]); //plist[0]이 역참조 하는 값
 printf("&plist[0]          = %p\n", &plist[0]); //plist 0번째 배열의 주소 값
 printf("&plist = %p\n", &plist); //plist의 주소 값 = 0번째 배열의 주소 값
 printf("plist = %p\n", plist); //plist 배열의 이름은 배열의시작 주소 값
 printf("plist[0]           = %p\n", plist[0]); //plist[0]의 값 출력
 printf("plist[1]           = %p\n", plist[1]); //plist[1]의 값 출력
 printf("plist[2]           = %p\n", plist[2]); //plist[2]의 값 출력
 printf("plist[3]           = %p\n", plist[3]); //plist[3]의 값 출력
 printf("plist[4]           = %p\n", plist[4]); //plist[4]의 값 출력
 free(plist[0]);
 }
