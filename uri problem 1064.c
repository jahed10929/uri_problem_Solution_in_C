#include<stdio.h>
int main()
{
    int count=0, i;
    float a[6], sum = 0.0, avg;
    for (i=0; i<6; i++){
        scanf("%f", &a[i]);
        if(a[i]>=0){
            count +=1;
            sum +=a[i];
        }
    }
    avg = sum/4;
    printf("%d valores positivos\n", count);
    printf("%.1f\n", avg);
    return 0;
}
