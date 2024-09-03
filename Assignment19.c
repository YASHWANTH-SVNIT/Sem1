#include<stdio.h>
int main()
{ char c;
  printf("Enter the desired character: ");
  scanf(" %c", &c);
  (c>=97&&c<=122)?printf("The given character is a small letter"):printf("The given character is not a small letter");
  return 0;
}
