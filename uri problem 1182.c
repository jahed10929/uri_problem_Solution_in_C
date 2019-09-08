#include<stdio.h>
int main()
{
    int n, i, j;
    double m[12][12], sum=0, avr;
    char ch;
    scanf("%d %c", &n, &ch);
    for(i=0; i<12; i++){
        for(j=0; j<12;j++)
            scanf("%lf", &m[i][j]);
    }
    for(i=0; i<12;i++)
            sum += m[i][n];
    switch(ch)
    {
    case 'S':
        printf("%.1lf\n", sum);
        break;
    case 'M':
        avr = sum/12.0;
        printf("%.1lf\n", avr);
        break;
    }
    return 0;
}

