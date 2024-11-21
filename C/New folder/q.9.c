#include <stdio.h>

int main()
{
   float celcious,fahrenheit;
   printf("enter the value :");
   scanf("%f",&fahrenheit);
   celcious=(fahrenheit-32)*5/9;
   printf("%f",celcious);
   return 0;
}