#include<stdio.h>
void main()
{
  float per;
  int s1,s2,s3,s4,s5,t;
  printf("Enter the marks of five subjects: ");
  scanf("%d%d%d%d%d", &s1,&s2,&s3,&s4,&s5);
  t=s1+s2+s3+s4+s5;
  per=t/5;
  printf("The total marks of student is %d", t);
  printf("\n The percentage is %f", per);
  }  