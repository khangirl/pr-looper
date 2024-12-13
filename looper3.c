#include<stdio.h>

int main()
{
    int n,fdigit,ldigit,sum;

    printf("Enter the Number : ");
    scanf("%d",&n);

    ldigit = n%10;

    while(n>=10){
        n = n/10;
    }

    fdigit=n;
    sum=fdigit+ldigit;

    printf("The sum of First and Last digit is : %d\n",sum);
}