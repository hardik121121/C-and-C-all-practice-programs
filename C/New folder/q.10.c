int main()
{
   float days,weeks,month,year;
   printf("enter the days :");
   scanf("%f",&days);
   weeks=days/7;
   month=days/30;
   year=days/365;
   printf("weeks :%f \n",weeks);
   printf("month :%f \n",month);
   printf("year :%f ",year);
   return 0;
}