#include<stdio.h>
int main()
{
    double x, p_n;
    int n, i_n, n100, n50, n20, n10, n5, n2, p100, p50, p25, p10, p5, p1 ;
    scanf("%lf", &x);
    n=x; //Type cast.
    p_n = x-n;
    i_n=p_n*100; //decimal to int .
    n100 = n/100;// first note.
    n = n%100;
    n50 = n/50;
    n = n%50;
    n20 = n/20;
    n = n%20;
    n10 = n/10;
    n = n%10;
    n5 = n/5;
    n = n%5;
    n2 = n/2;
    n = n%2;// last note.
    n = (n*100)+i_n;// last note to posha.
    p100 = n/100;// first poisha.
    n = n%100;
    p50 = n/50;
    n = n%50;
    p25 = n/25;
    n = n%25;
    p10 = n/10;
    n = n%10;
    p5 = n/5;
    n = n%5;
    p1 = n/1; //last posha.
    // Output start.
    printf("NOTAS:\n"); //NOTAS start.
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n"); //MOEDAS start.
    printf("%d moeda(s) de R$ 1.00\n", p100);
    printf("%d moeda(s) de R$ 0.50\n", p50);
    printf("%d moeda(s) de R$ 0.25\n", p25);
    printf("%d moeda(s) de R$ 0.10\n", p10);
    printf("%d moeda(s) de R$ 0.05\n", p5);
    printf("%d moeda(s) de R$ 0.01\n", p1);
    return 0;
}
