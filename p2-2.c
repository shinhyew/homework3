 #include <stdio.h>
 void print_one(int *ptr, int rows);
 int main()
 {
 int one[] = {0, 1, 2, 3, 4};
 printf("----[신혜원] [2023041057]----\n");
 printf("one        = %p\n", one); //one의 이름 = one의 0번째 배열의 주소 값     
 printf("&one       = %p\n", &one); //one의 주소 값 = one의 0번째 배열의 주소 값
 printf("&one[0] = %p\n", &one[0]); //one의 0번째 배열의 주소 값(one[0])
 printf("\n");
 printf("------------------------------------\n");
 printf("  print_one(&one[0], 5) \n");
 printf("------------------------------------\n");
 print_one(&one[0], 5); //함수 실행하여 one[0]의 주소와 5를 넘겨줌
 printf("------------------------------------\n");
 printf("  print_one(one, 5) \n");
 printf("------------------------------------\n");
 print_one(one, 5); //함수 실행하여 one 배열과 5를 넘김 
 return 0;
 }
 void print_one(int *ptr, int rows)
 {/* print out a one-dimensional array using a pointer */
 int i;
 printf ("Address \t Contents\n");
 for (i = 0; i < rows; i++)
 printf("%p \t  %5d\n", ptr + i, *(ptr + i)); //one의 값과 주소 값을 출력
 printf("\n");
 }
 