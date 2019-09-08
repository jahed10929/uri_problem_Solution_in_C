#include<stdio.h>
int main()
{
    int a, b,q, r;
    scanf("%d%d", &a, &b);
    if (a < 0){
            if(b>0){
                q = a/b;
                q = q-1;
                r = a%b;
                r = b+r;
            }
            else{
                b *= -1;
                a*= -1;
                q = a/b;
                q = q+1;
                r = a%b;
                r = (b-r);
            }
            printf("%d %d\n", q, r);
        }
    else {
        q = a/b;
        r = a%b;
        printf("%d %d\n", q, r);
    }
    return 0;
}
