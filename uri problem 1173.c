#include<stdio.h>
int main()
{
    int a[10];
    int x, i;
    scanf("%d", &x);
    a[0]=x;
    for(i=1; i<10; i++){
        a[i]= a[i-1]+a[i-1];
    }
    for(i=0; i<10; i++){
        printf("N[%d] = %d\n", i, a[i]);
    }
    return 0;
}
