#include <stdio.h>

int main() {
  int length,breadth,perimeter;
  printf("enter the length : \n");
  scanf("%d",&length);
  printf("enter the breadth : \n");
  scanf("%d",&breadth);
  perimeter=2*(length+breadth);
  printf("%d",perimeter);
    return 0;
}