#include <stdio.h>
int main()
{
    float salary, tax;
    scanf("%f", &salary);
    if (salary>=0&&salary<=2000.00){
        printf("Isento\n");
    }
    if (salary>=2000.01&&salary<=3000.00){
        tax = (((salary-2000.00)*8)/100);
        printf("R$ %.2f\n", tax);
    }
    if (salary>=3000.01&&salary<=4500.00){
        tax = (80+(((salary-3000.00)*18)/100));
        printf("R$ %.2f\n", tax);
    }
    if (salary>=4500.01){
        tax = (80+270+(((salary-4500.00)*28)/100));
        printf("R$ %.2f\n", tax);
    }
    return 0;
}
