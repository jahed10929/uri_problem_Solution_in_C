#include<stdio.h>
int main()
{
    int m, n, sum=0, i;
    do{
        scanf("%d%d", &m, &n);
        if(m!=0&&n!=0&&m>0&&n>0){
            if(m<n){
                for (i=m; i<=n; i++){
                    sum +=i;
                    printf("%d ", i);
                }
                printf("Sum=%d\n", sum);
                sum = 0;
            }else{
                for (i=n; i<=m; i++){
                    sum +=i;
                    printf("%d ", i);
                }
                printf("Sum=%d\n", sum);
                sum = 0;
            }
        }
    }while (m!=0&&n!=0&&m>0&&n>0);
    return 0;
}
