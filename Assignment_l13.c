#include<stdio.h>
int main()
{ int num,t;
  printf("Enter the number: ");
  scanf("%d", &num);
  t=num%2;
  if(t==0)
   printf("The given number is even");
  else 
   printf("The given number is odd"); 
  return 0;
}
