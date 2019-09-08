#include<stdio.h>
void fibo(int x);
int main ()
{
    int n, x, y, temp, i=0;
    scanf("%d", &n);
    if(n>0&&n<46){
        if(n==1)
            printf("0\n");
        else if(n==2)
            printf("0 1\n");
        else{
            printf("0 1 ");
            fibo(n);
    }
    }
    return 0;
}
void fibo(int x)
{
    int i, a=0, b=1, temp=0;
    for(i=3; i<=x; i++){
        temp = a+b;
        a=b;
        b=temp;
        if(i==x){
            printf("%d\n", temp);
            break;
        }
        printf("%d ", temp);
    }
}
