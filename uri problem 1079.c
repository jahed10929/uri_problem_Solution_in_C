#include<stdio.h>
int main()
{
    int n, i;
    float a, b, c, ava;
    scanf("%d", &n);
    for(i=0; i<n;i++){
        scanf("%f%f%f", &a, &b, &c);
        ava= ((a*2)+(b*3)+(c*5))/10;
        printf("%.1f\n", ava);
    }
    return 0;
}
