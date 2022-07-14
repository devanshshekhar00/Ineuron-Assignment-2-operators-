#include <stdio.h>

int main() {
    int k ;
    printf("Enter a number\t");
    scanf("%d",&k);
    int j = k%10;
    printf("unit digit is %d",j);
    
    return 0;
}
