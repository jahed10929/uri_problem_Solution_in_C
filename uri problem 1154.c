#include<stdio.h>
int main()
{
    int i=0;
    float avg, sum = 0, ags;
    do{
        scanf("%f", &ags);
        if (ags>=0){
            sum +=ags;
            i++;
        }
    }while(ags>=0);

    avg=sum/i;
    printf("%.2f\n", avg);
    return 0;
}
