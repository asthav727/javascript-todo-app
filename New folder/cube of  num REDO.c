#include<stdio.h>
int main(){
    int number,cube;
    printf("enter a number");
    scanf("%d", &number);
    cube=number*number*number;
    printf("the cube of %d is:%d\n", number,cube);
     return 0;
}