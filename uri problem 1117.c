#include<stdio.h>
int main()
{
    float x, sum=0.0, avg;
    int count = 0;
    do{
        scanf("%f", &x);
        if(x>=0.0&&x<=10.0){

            sum = sum+x;
            count ++;
        }
        else
            printf("nota invalida\n");
    }while(count!=2);
    avg = sum/2;
    printf("media = %.2f\n", avg);
    return 0;
}
