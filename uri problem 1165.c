#include<stdio.h>
int main()
{
    int n, x, i, j, tag=0;
    scanf("%d", &n);
    if (n>=1&&n<=100){
        for (i=0; i<n; i++){
            scanf("%d", &x);
            for (j=2; j<x; j++){
                if (x%j==0){
                    tag++;
                    break;
                }
                else
                    tag = 0;

            }
            if (tag==0)
                printf("%d eh primo\n", x);
            else
                printf("%d nao eh primo\n", x);
        }
    }
    return 0;
}
