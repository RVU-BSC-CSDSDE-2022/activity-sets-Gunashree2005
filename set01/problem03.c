#include <stdio.h>

int main() 
{
int a, b,sum;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
  scanf("%d" , &b);
  sum=add(a,b);
  printf("%d", sum);
  return 1;
  
}

int add(int a, int b)
{
  int sum;
  sum=a+b;
  return sum;
}
