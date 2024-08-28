#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter the two numbers: ");
  scanf("%d%d", &a,&b);
  printf("\nThe two numbers before swapping is %d %d", a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\nThe two numbers after swapping is %d %d", a,b);
}