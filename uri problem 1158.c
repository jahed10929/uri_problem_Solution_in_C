#include<stdio.h>
int main()
{
    int n,j,  i, x, y, sum=0;
    scanf("%d", &n);
    for(i=0;i<n; i++){
        scanf("%d%d", &x, &y);
        for(j=0; j<y*2; j++){
            if(x%2!=0){
                sum+=x;
            }
            x++;
        }
        printf("%d\n", sum);
        sum=0;
    }
    return 0;
}
