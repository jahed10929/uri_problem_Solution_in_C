#include<stdio.h>
int main()
{
    int ary[10], i;
    for (i=0; i<10; i++){
        scanf("%d", &ary[i]);
    }
    for (i=0; i<10; i++){
        if (ary[i]<=0)
            ary[i] = 1;
        printf("X[%d] = %d\n", i,ary[i]);
    }
    return 0;
}
