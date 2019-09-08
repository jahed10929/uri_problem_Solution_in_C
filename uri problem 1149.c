#include<stdio.h>
int main()
{
    int x, y,  i, sum = 0;
    scanf("%d%d", &x, &y);
    while(y<=0){
        scanf("%d", &y);
    }
    for(i=1; i<=y; i++){
        sum += x;
        x++;
    }
    printf("%d\n", sum);

    return 0;
}
