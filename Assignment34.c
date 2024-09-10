#include<stdio.h>
int main()
{
  int n,t1=0,t2=1,fib;
  printf("Entter the number of terms: ");
  scanf("%d", &n);
  printf("%d %d", t1,t2);
  for(int i=3;i<=n;i++)
  {
    fib=t1+t2;;
    printf("  %d", fib);
    t1=t2;
    t2=fib;
  }
  return 0;
}
 