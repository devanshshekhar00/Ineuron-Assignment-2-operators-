#include <stdio.h> 
int main()
{ 
 int a,b; printf("Enter 1st number\t "); scanf("%d",&a); 
 printf("Enter the 2nd number\t"); 
 scanf("%d",&b); 
 a = a+b; 
 b = a-b; 
 a = a-b; 
 printf("The numbers have been swapped , num1 is now %d,num2 is now %d ",a,b);
 return 0; 
}
