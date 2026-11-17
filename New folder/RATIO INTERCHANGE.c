#include<stdio.h>
int main(){
    float a,b,c,ratio;
    printf("enter value of a");
    scanf("%f", &a);
    printf("enter value of b");
    scanf("%f", &b);
    ratio=a/b;
    printf("\n the ratio is %f", ratio);
    if (ratio>0);
    c=a;
    a=b;
    b=c;
    printf("\n a=%f\t b=%f\t c=%f\t", a,b,c);
    return 0;
    }

