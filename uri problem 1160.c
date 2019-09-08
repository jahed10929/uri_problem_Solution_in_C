#include<stdio.h>
int main()
{
    int pa, pb, n, i, j, year;
    double g1, g2;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        year =0;
        scanf("%d%d%lf%lf", &pa, &pb, &g1, &g2);
        for(j=pa; j<=pb;){
            pa += ((pa*g1)/100);
            pb += ((pb*g2)/100);
            j = pa;
            year++;
            if(year>100){
                printf("Mais de 1 seculo.\n");
                break;
            }
            else if(pa>pb)
                printf("%d anos.\n", year);
        }
    }
    return 0;
}
