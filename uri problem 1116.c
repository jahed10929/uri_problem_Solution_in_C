#include <stdio.h>
int main()
{
    int n, x, y, i;
    float div, x1, y1;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d%d", &x, &y);
        x1=x;
        y1=y;
        if(y1==0.0)
            printf("divisao impossivel\n");
        else
        {
            div = x1/y1;
            printf("%.1f\n", div);
        }
    }

    return 0;
}
