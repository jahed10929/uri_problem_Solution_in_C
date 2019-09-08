#include<stdio.h>
int main()
{
    int n, x, i, j, sum=0;
    scanf ("%d", &n);
    for (i=0; i<n; i++){
        scanf ("%d", &x);
        for (j=1; j<=x; j++){
            if(x%i==0)
                sum+=i;
        }
        if (sum == x)
            printf("%d eh perfeito\n", x);
        else
            printf("%d nao eh perfeito\n", x);
    }
    return 0;
}
