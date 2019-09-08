#include<stdio.h>
int main()
{
    int i, j, x, a, b;
    scanf("%d", &x);
    for(i=1; i<=x; i++){
        if (i==1){
            for(j=1; j<=1; j++){
                a=i*i;
                b=a*i;
                printf("%d %d %d\n", i, a, b);
            }
            for(j=1; j<=1; j++){
                a=i*i+1;
                b=a*i;
                printf("%d %d %d\n", i, a, b);
            }
        }
        else if(i>=2){
            for(j=1; j<=1; j++){
                a=i*i;
                b=a*i;
                printf("%d %d %d\n", i, a, b);
            }
            for(j=1; j<=1; j++){
                a=i*i+1;
                b=a*i-(i-1);
                printf("%d %d %d\n", i, a, b);
            }
        }
    }

    return 0;
}
