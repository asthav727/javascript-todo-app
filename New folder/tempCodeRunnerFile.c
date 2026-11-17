 #include<stdio.h>
 int main(){
int a,b,i;
printf("enter first number: ");
scanf("%d", &a);
printf("enter second number: ");
scanf("%d", &b);
for (i=1; a!b ; i++){
    if((a * i) % b == 0);
    break;
 }
 printf("lcm is %d\n", a * i);
 return 0;
}
