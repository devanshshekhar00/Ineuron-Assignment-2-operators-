
#include <stdio.h>

int main() {
    int k;
    printf("Enter a 3 digit number\t");
    scanf("%d",&k);
    if(k >=100 && k<=999)
    {
        int i = k%10;int j = k/10;
        i = i + j%10;j = j/10;
        i = i + j;
        printf("%d",i);
    }
    else
    {
        printf("Invalid input");
    }
    
    return 0;
}
