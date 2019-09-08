#include<stdio.h>
int main()
{
    int n, day;
    float m;
    scanf("%d", &n);
    while(n>0){
        scanf("%f", &m);
        day=0;
        while(m>1){
                m/=2;
                day++;
        }
        printf("%d dias\n", day);
        n--;
    }
    return 0;
}
