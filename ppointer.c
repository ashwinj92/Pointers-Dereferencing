/*Pointer Dereferencing stuff by ashwin*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
 int a[6],*p;
 int i;
   a[5]=224;
   p=&a; *p=1;
   p++; *p=20;
   p=&a[2]; *p=30;
   p=a+3; *p=40;
   p=a; *(p+4)=50;
   *(a+5) = 226;
for(i=0;i<6;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
  printf("pointer address is %d --->\n",a[5]);
  return 0;
}


