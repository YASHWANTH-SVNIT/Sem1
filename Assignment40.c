#include<stdio.h>
int main()
{
  int a[100],i=0,sum=0;
  printf("Enter the numbers:\n");
  while(a[i-1]>=0)
  {
   scanf("%d", &a[i]); 
   i++;
  } 
  for(int j=0;j<i-1;j++)
   sum=sum+a[j];
  printf("The sum of all the numbers is %d", sum);
  return 0;
}