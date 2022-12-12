#include<stdio.h>
void scalene(int side1,int side2, int side3);
int input_side();

int main()
{
  int side1,side2,side3;
  printf("enter the no side:");
  scanf("%d%d%d",&side1,&side2,&side3);

  
scalene(side1,side2,side3);
}

void scalene(int side1 ,int side2,int side3)
{
  if (side1==side2 || side2==side3 || side3==side1)
  {
    printf("the given traingle is not scalene:");
  }
  else 
  {
    printf("the given triangle is scalen:");
  }
  
}