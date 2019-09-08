#include<stdio.h>
int main()
{
    int i, n, num, total, c=0, r=0, s=0;
    float p_c, p_r, p_s;
    char name;
    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d %c", &num, &name);
        switch(name)
        {
            case 'C':
                c+=num;
                break;
            case 'R':
                r+=num;
                break;
            case 'S':
                s+=num;
                break;
        }
    }
    total = c+r+s;
    p_c = (((float)c*100)/(float)total);
    p_s = (((float)s*100)/(float)total);
    p_r = (((float)r*100)/(float)total);
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %c\n", p_c, '%');
    printf("Percentual de ratos: %.2f %c\n", p_r, '%');
    printf("Percentual de sapos: %.2f %c\n", p_s, '%');
    return 0;
}
