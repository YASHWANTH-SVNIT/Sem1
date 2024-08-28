#include<stdio.h>
void main()
{
  int a,b,temp;
  printf("Enter the two numbers: ");
  scanf("%d%d",&a,&b);
  printf("The two numbers before swapping is %d %d", a,b);
  temp=b;
  b=a;
  a=temp;
  printf("\n The two numbers after swapping is %d %d", a, b);
}