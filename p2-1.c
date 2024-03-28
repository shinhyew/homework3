 #include <stdio.h>

 #define MAX_SIZE 100
 float sum1(float list[], int);
 float sum2(float *list, int);
 float sum3(int n, float *list);
 float input[MAX_SIZE], answer;
 int i;
 void main(void)
 {
 for(i=0; i < MAX_SIZE; i++)
 input[i] = i;
 /* for checking call by reference */
 printf("----[신혜원] [2023041057]----\n");
 printf("--------------------------------------\n");
 printf(" sum1(input, MAX_SIZE) \n");
 printf("--------------------------------------\n");
 printf("input \t= %p\n", input); //input의 값 출력
 answer = sum1(input, MAX_SIZE);
 printf("The sum is: %f\n\n", answer); //answer의 값 출력
 printf("--------------------------------------\n");
 printf(" sum2(input, MAX_SIZE) \n");
 printf("--------------------------------------\n");
 printf("input \t= %p\n", input); //input의 값 출력
 answer = sum2(input, MAX_SIZE);
 printf("The sum is: %f\n\n", answer); //answer의 값 출력
 printf("--------------------------------------\n");
 printf(" sum3(MAX_SIZE, input) \n");
 printf("--------------------------------------\n");
 printf("input \t= %p\n", input); //input의 값 출력
 answer = sum3(MAX_SIZE, input);
 printf("The sum is: %f\n\n", answer); //answer의 값 출력
 }
 float sum1(float list[], int n)
 {
 printf("list \t= %p\n", list); //list의 값 출력
 printf("&list \t= %p\n\n", &list); //list의 주소 값 출력
 int i;
 float tempsum = 0;
 for(i = 0; i < n; i++)
 tempsum += list[i]; //tempsum에 list[0]~list[n]의 합을 저장
 return tempsum;
 }
 float sum2(float *list, int n)
 {
 printf("list \t= %p\n", list); //list의 값 출력
 printf("&list \t= %p\n\n", &list); //list의 주소 값 출력
 int i;
 float tempsum = 0;
 for(i = 0; i < n; i++)
 tempsum += *(list + i); //tempsum에 *(list+0)~*(list+n)의 합 저장
 return tempsum;
 }
 /* stack variable reuse test */
 float sum3(int n, float *list)
 {
 printf("list \t= %p\n", list); //list의 값 출력
 printf("&list \t= %p\n\n", &list); //list의 주소 값 출력
 int i;
 float tempsum = 0; 
 for(i = 0; i < n; i++) 
 tempsum += *(list + i); //tempsum에 *(list+0)~*(list+n)의 합 저장
 return tempsum;
 }