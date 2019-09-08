#include<stdio.h>
int main()
{
    float x, sum=0.0, avg;
    int a, count = 0;
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
    do{
        sum=0;
        count=0;
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &a);
        if(a==1){
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
        }
    }while(a!=2);
    return 0;
}
