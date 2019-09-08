#include<stdio.h>
int main()
{
    int i, j, x, a, b;
    scanf("%d", &x);
    for(i=1;i<=x;i++){
        a=i*i;
        b=a*i;
        printf("%d %d %d\n", i, a, b);

    }
    return 0;
}
