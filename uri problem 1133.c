#include<stdio.h>
int main()
{
    int x, y, i,tamp;
    scanf("%d%d", &x, &y);
    if(x>0&&y>0){
    if(x>y){
        tamp=x;
        x=y;
        y=tamp;
    }
    for(i=x+1; i<y; i++){
        if(i%5==2||i%5==3)
            printf("%d\n", i);
    }
    }
    return 0;
}
