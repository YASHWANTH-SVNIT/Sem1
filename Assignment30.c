#include<stdio.h>
#include<math.h>
int main()
{ 
  int num,count,temp,i,rev;
  printf("Enter the number: ");
  scanf("%d",&num);
  temp=num,count=0,rev=0;
  while(temp!=0)
  {
   temp/=10;
   count++;
  }
  temp=num;
  while(count>0)
  { 
   i=temp%10;
   rev=rev+i*pow(10,count-1);
   count--;
   temp/=10;
  }
  printf("The reverse of the given number is %d", rev );
  return 0;
}
