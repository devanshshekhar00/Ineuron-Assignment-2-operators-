#include <stdio.h> 
int main() 
{
  int a,b;
  printf("Enter 1st number\t "); 
  scanf("%d",&a); printf("Enter the 2nd number\t"); 
  scanf("%d",&b); 
  int k = a; 
  a = b; 
  b = k; 
  printf("The numbers have been swapped , num1 is now %d,num2 is now %d ",a,b); 
  return 0; 
}
