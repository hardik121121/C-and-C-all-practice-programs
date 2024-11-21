#include <stdio.h>

int main()
{
   int a,b,add,sub,mul,divsion;
   printf("enter the 1st no.\n");
   scanf("%d",&a);
   printf("enter the 2nd no. \n");
   scanf("%d",&b);
   add=a+b;
   printf("sum=%d \n",add);
   sub=a-b;
   printf("subtrsction=%d \n",sub);
   mul=a*b;
   printf("multipication=%d \n",mul);
   divsion=a/b;
   printf("devsion=%d",divsion);
   
   return 0;
}