#include<stdio.h>
int main()
{
    int i, j, k=11;
    char ch[2];
    double m[12][12], sum=0;
    scanf("%s", &ch);
    for(i=0; i<12; i++){
        for (j=0; j<12; j++)
            scanf("%lf", &m[i][j]);
    }
    for(i=0; i<11; i++){
        for (j=0; j<k; j++)
            sum +=m[i][j];
        k--;
    }
    if (ch[0]=='S')
        printf("%.1lf\n", sum);
    if(ch[0]=='M')
        printf("%.1lf\n", sum/66.0);
    return 0;
}

