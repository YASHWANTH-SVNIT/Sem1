#include<stdio.h>
int main()
{
 int n,count=0;
 printf("Enter the number: ");
 scanf("%d", &n);
 for(int i=1;i<=n;i++)
 {
  if(n%i==0)
   count++;
 }
 if(count>2)
  printf("The given number is a composite number");
 else 
  printf("The given number is a prime number"); 
 return 0;
}