#include<stdio.h>
int main()
{
    int i, j, k=7,l=11, cout=0;
    char ch[2];
    double m[12][12], sum=0, avg;
    scanf("%s", &ch);
    for(i=0; i<12; i++){
        for (j=0; j<12; j++)
            scanf("%lf", &m[i][j]);
    }
    for(i=1; i<=5; i++){
        for (j=l; j<=11; j++){
            sum +=m[i][j];
            cout++;
        }
        l--;
    }
    for(i=6; i<11; i++){
        for (j=k; j<=11; j++){
            sum +=m[i][j];
            cout++;
        }
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
