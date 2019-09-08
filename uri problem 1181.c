#include<stdio.h>
int main()
{
    int n, i, j;
    float m[12][12], sum=0, avr;
    char ch;
    scanf("%d %c", &n, &ch);
    for(i=0; i<12; i++){
        for(j=0; j<12;j++)
            scanf("%f", &m[i][j]);
    }
    for(j=0; j<12;j++)
            sum += m[n][j];
    switch(ch)
    {
    case 'S':
        printf("%.1f\n", sum);
        break;
    case 'M':
        avr = sum/12.0;
        printf("%.1f\n", avr);
        break;
    }
    return 0;
}
