#include<stdio.h>
#include<string.h>
int main()
{
    int n, m, i;
    char a[3];
    scanf("%d", &n);
    for(i=0;i<n; i++){
        scanf("%d", &m);
        scanf("%s", a);
        if(strcmp(a, "bin")) printf("binary\n");
        else if(strcmp(a, "dec")) printf("decimal\n");
        else if(strcmp(a, "hex")) printf("hexadecimal\n");

    }
    return 0;
}
