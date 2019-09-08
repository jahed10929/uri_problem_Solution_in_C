#include<stdio.h>
int main()
{
    int i, j, x, y, n, sum=0, a, b;
    scanf("%d", &n);
    for (i=1;i<=n; i++){
            scanf("%d%d", &x, &y);
            if (x<y){
            for(a=x+1; a<y; a++){
                if (a%2!=0){
                    sum+=a;
                }
            }
        }
        else{
                for(a=y+1; a<x; a++){
                if (a%2!=0){
                    sum+=a;
                }
            }
        }
        printf("%d\n", sum);
        sum=0;
    }
    return 0;
}
