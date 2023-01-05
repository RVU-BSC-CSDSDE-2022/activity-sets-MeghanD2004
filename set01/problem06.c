#include <stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void compare (nt a, int b, int c, int largesrt);

int input
{
  int n;
  printf("Enter the numbers");
  scanf("%d", &n);
  return n;
}
void compare(int a, int b, int c, int *largest)
{
  if (a >= b && a >=c)
  {
    *largest = a;
  }
  else if(b >= a && b>=c)
  {
    *largest = b;
  }
  else {
    *larest = c;
  }
}
void output (int a, int b, inc c, int largest)
{
  printf("Largest of %d, %d and %d is %d", a, b, c, largest);
}
int main()
{
  int a, b, c, largest;
  a = input();
  b = input();
  c = input();
  compare(a, b, c, &largest);
  output(a, b, c, largest);
  return 0;
}