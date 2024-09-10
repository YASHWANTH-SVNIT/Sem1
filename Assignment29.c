#include<stdio.h>
#include<math.h>
int main()
{ 
  int num,count,temp,i,pal;
  printf("Enter the number: ");
  scanf("%d",&num);
  temp=num,count=0,pal=0;
  while(temp!=0)
  {
   temp/=10;
   count++;
  }
  temp=num;
  while(count>0)
  { 
   i=temp%10;
   pal=pal+i*pow(10,count-1);
   count--;
   temp/=10;
  }
  if(pal==num)
   printf("The given number is a palindrome");
  else
   printf("The given number is not a palindrome");
  return 0;
}
