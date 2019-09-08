#include<stdio.h>
int main()
{
    int x, y, i, sum=0,  cunt=0;
    scanf("%d", &x);
    scanf("%d", &y);
    while (x>=y){
        scanf("%d", &y);
    }

    for(i=x; i<=y; i++){
        sum+=i;
        cunt++;
        if(sum>=y)
            break;

    }
    printf("%d\n",cunt);
    return 0;
}
