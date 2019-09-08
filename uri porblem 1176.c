#include<stdio.h>
int main()
{
    int j, i, n, t;
    int f1=0, f2=1, fib;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        if(n>=0&&n<=60){
            f1=0;
            f2=1;
            for (j=0;j<=n;j++){
                if(n==0){
                    printf("Fib(%d) = %d\n", n, f1);
                    break;
                }
                else if(n==1){
                    printf("Fib(%d) = %d\n", n, f2);
                    break;
                }
                else if (j>=2){
                    fib = f1+f2;
                    f1=f2;
                    f2=fib;
                    if(j==n){
                        printf("Fib(%d) = %d\n", n, fib);
                    }
                }
            }
    }
    }
    return 0;
}
