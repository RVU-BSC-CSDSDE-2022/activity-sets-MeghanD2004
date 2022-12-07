#include<stdio.h> 
int main() 
{ 
    int n, sum = 0; 
  
    printf("Enter the value of n\n"); 
    scanf("%d", &n); 
      int arr[n]; 
      printf("Enter %d numbers \n",n); 
    for (int i = 0; i < n; i++) 
    { 
        scanf("%d", &arr[i]); 
        sum += arr[i]; 
    } 
      printf("Sum of %d numbers is %d\n", n, sum); 
}