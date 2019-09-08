#include<stdio.h>
int main()
{
    int i, j=7, j1=5;
    for(i=1;i<=9; i+=2){
        for (;j>=j1; j--){
            printf("I=%d J=%d\n", i, j);
        }
        j= j+5;
        j1+=2;
    }
    return 0;
}

