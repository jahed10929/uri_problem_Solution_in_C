#include<stdio.h>
int main()
{
    int i;
    int d, n[1000];

    scanf("%d", &d);
    for(i=0;i!='\0'; i++){
        scanf("%d", &n[i]);
    }
    for(i=0;i!='\0'; i++){
        printf("%d\n", n[i]);
    }

    return 0;
}
