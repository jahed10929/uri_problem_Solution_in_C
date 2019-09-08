#include<stdio.h>
int main()
{
    int i=0, j=0 , t, n[1000];
    scanf("%d", &t);
    while(i<1000){
            printf("N[%d] = %d\n", i, j);
            j++;
            if(j>=t)
                j=0;
            i++;
        }

    return 0;
}
