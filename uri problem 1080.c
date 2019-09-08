#include<stdio.h>
int main()
{
    int i, a, pos, num=0;
    for (i=1; i<=100;i++){
        scanf("%d", &a);
        if(a>num){
            num = a;
            pos = i;
        }
    }
    printf("%d\n%d\n",num, pos );
    return 0;
}
