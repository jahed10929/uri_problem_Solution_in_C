#include<stdio.h>
int main()
{
    int i_p;
    float b_s, n_s, m_e;
    scanf("%f", &b_s);
    if (b_s>=0&&b_s<=400.00){
        m_e = (b_s*15)/100;
        n_s = b_s+m_e;
        i_p = 15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", n_s, m_e, i_p);
    }
    else if (b_s>=400.01&&b_s<=800.00){
        m_e = (b_s*12)/100;
        n_s = b_s+m_e;
        i_p = 12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", n_s, m_e, i_p);
    }
    else if (b_s>=800.01&&b_s<=1200.00){
        m_e = (b_s*10)/100;
        n_s = b_s+m_e;
        i_p = 10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", n_s, m_e, i_p);
    }
    else if (b_s>=1200.01&&b_s<=2000.00){
        m_e = (b_s*7)/100;
        n_s = b_s+m_e;
        i_p = 7;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", n_s, m_e, i_p);
    }
    else if (b_s>2000.00){
        m_e = (b_s*4)/100;
        n_s = b_s+m_e;
        i_p = 4;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", n_s, m_e, i_p);
    }
    return 0;
}
