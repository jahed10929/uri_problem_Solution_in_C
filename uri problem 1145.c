#include<stdio.h>
int main()
{
    int i, j, x, y, a;
    scanf("%d%d", &x, &y);
    if(x>1&&x<20&&y>x&&y<100000){
        for (i=1; i<=y; i+=x){
        a= i+x;
        for (j=i;j<a; j++){
            if(j==(a-1)){
                printf("%d\n", j);
            }
            else
                printf("%d ", j);
        }
    }
    }
    return 0;
}

