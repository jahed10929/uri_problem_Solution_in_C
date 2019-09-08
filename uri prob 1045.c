#include<stdio.h>
int main()
{
    int n, i;
    float x, y, sum, total=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%f%f", &x,&y);
        sum = ((x*x*y)/2304);
        printf("%.0f x %.0f = %.03f\n", x, y, sum);
        total+=sum;
    }
    printf(" Total = %f", total);

    return 0;
}
