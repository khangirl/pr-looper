#include<stdio.h>

int main(){
    
    int n, count=0;
    printf("Enter the Number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        n = n/10;
        count++;
    }
    printf("The total number of digits in the given number is : %d\n",count);
}