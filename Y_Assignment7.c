#include<stdio.h>
#include<math.h>
void main()
{
  float s,a,b,c,A;
  printf("Enter the three sides of traingle: ");
  scanf("%f%f%f", &a,&b,&c);
  s=(a+b+c)/2;
  A=sqrt(s*s*(s-a)*(s-b)*(s-c));
  printf("The area of triangle is %d", A);
}