#include<stdio.h>
int main(){

    char a = 'a';
    do{
        printf("%c ",a);
        a =a + 4;
    }while(a<='z');
}