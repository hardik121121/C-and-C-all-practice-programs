#include <stdio.h>
#include<math.h>
int main()
{
    float p,r,t,A;
    printf("enter initial principal balance :");
    scanf("%f",&p);
    printf("enter annunal intrest rate: ");
    scanf("%f",&r);
     printf("enter time(in years) : ");
    scanf("%f",&t);
    A=p*(pow((1+r/100),t));
    printf(" compound intrest: %f", A);
    return 0;
}