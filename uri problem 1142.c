#include<stdio.h>
int main()
{
    int i, j=0,k=3,  x;
    scanf("%d", &x);
    for(i=0;i<x;i++){
        for(j=j+1;j<=k; j++){
            printf("%d ", j);
        }
        k=j+3;
        printf("PUM\n");
    }
    return 0;
}
