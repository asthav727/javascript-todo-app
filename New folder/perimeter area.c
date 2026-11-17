#include<stdio.h>
int main(){
float radius,area,perimeter;
printf("enter radius of circle:\n");
scanf("%f", &radius);
perimeter = 2 * 3.14 * radius;
    printf("perimeter of the circle =%f\n", perimeter);
    area= 3.14 * radius * radius;
    printf ("area of circle =%f\n",area);
    return 0;
}
