#include<stdio.h>
#define NOSCAN
int main()
{
   int a=0;
  // printf("Enter the value for a\n");
  // scanf("%d",&a);
   #ifdef NOSCAN //value be true:1
   a=6;
  printf("1");
   #else
   printf("a is not 6");
   #endif
   return 0;
}