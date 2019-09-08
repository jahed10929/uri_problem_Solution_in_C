#include<stdio.h>
int main()
{
    int a, b, c, d, i, j, k, l, w, x, y, z, tem, mid;
    char m[4], n[2];
    scanf("%s%d", m, &a);
    scanf("%d%s%d%s%d", &b, n, &c, n, &d);
    scanf("%s%d", m, &i);
    scanf("%d%s%d%s%d", &j, n, &k, n, &l);
    tem = ((i*86400)+(j*3600)+(k*60)+l)-((a*86400)+(b*3600)+(c*60)+d);
    w=tem/86400;
    printf("%d dia(s)\n", w);
    mid = tem-(w*86400);
    x = mid/3600;
    printf("%d hora(s)\n", x);
    tem = mid-(x*3600);
    y = tem/60;
    printf("%d minuto(s)\n", y);
    mid = tem-(y*60);
    z = mid;
    printf("%d segundo(s)\n", z);
    return 0;
}
