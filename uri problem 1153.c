#include<stdio.h>
int main()
{
    int n, i, valu=1;
    scanf("%d", &n);
    if(n>0&&n<13){
        for(i=n;i>0;i--){
            valu*=i;
        }
        printf("%d\n", valu);
    }
    return 0;
}
