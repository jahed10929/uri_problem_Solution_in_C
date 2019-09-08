#include<stdio.h>
int main()
{
    int i, count=0,n=6;
    float num[6];
    for (i = 1;i<=n;i++){
        scanf("%f", &num[i]);
        if (num[i]>0.0){
            count +=1;
        }
    }
    printf("%d valores positivos\n", count);
    return 0;
}
