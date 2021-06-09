//Write a C Program to identify if a number is a palindrome or not.
#include <stdio.h>
int main()
{
  int n, r = 0, t;

  scanf("%d", &n);

  t = n;

  while (t != 0)
  {
    r = r * 10;
    r = r + t%10;
    t = t/10;
  }

  if (n == r)
    printf("Yes");
  else
    printf("No");

  return 0;
}
