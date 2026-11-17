    #include<stdio.h>
    int main(){
    int n,i,c=0,number;
    printf("enter the number");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        if(n%i==0){
            c++;
        }
        }
        if (c==2){
            printf("%dis a prime number", n);
        }
        else{
            printf("%dis not a prime number", n);
        }
          return 0;
    }