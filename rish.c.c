#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number to check: ");
  scanf("%d", &num);
  
  if (num==0)
  printf("Enter number greater than 0");
  else if (num%2 == 0)
  {
    printf("%d is even", num);
  }
  else
  printf("%d is an odd number", num);

  return 0;
}