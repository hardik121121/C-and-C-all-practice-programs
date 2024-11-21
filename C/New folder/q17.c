#include <stdio.h>
int main()
{
    float p,r,t,A;
    printf("enter initial principal balance :");
    scanf("%f",&p);
    printf("enter annunal intrest rate: ");
    scanf("%f",&r);
     printf("enter time(in years) : ");
    scanf("%f",&t);
    A=(p*r*t)/100;
    printf("final amount: %f", A);
    return 0;
}