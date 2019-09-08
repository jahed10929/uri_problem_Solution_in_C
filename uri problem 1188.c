#include<stdio.h>
int main()
{
    int i, j, k=6,l=5, cout=0;
    char ch[2];
    double m[12][12], sum=0, avg;
    scanf("%s", &ch);
    for(i=0; i<12; i++){
        for (j=0; j<12; j++)
            scanf("%lf", &m[i][j]);
    }
    for(i=7; i<12; i++){
        for (j=l; j<=k; j++){
            sum +=m[i][j];
            cout++;
        }
        l--;
        k++;
    }
    if (ch[0]=='S')
        printf("%.1lf\n", sum);
    if(ch[0]=='M'){
        avg = sum/(double) cout;
        printf("%.1lf\n", avg);
    }
    return 0;
}

