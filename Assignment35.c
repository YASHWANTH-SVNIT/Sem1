#include<stdio.h>
int main()
{
  int n,i,sum=0,ans;
  printf("Enter the number: ");
  scanf("%d", &n);
  while(n!=0)
  {
    i=n%10;
    sum=sum+i;
    n/=10;
  }
  if(sum<=9)
   ans=sum;  
  else
  {
    while(sum>9)
    { n=sum;
     sum=0;
     while(n!=0)
     {
       i=n%10;
       sum=sum+i;
       n/=10;
     }
    }
    ans=sum; 
  }
  printf("The sum of digits upto single digit is %d",ans);
  return 0;
}