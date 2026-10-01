#include<stdio.h>
int main()
{
    int age;
    scanf("%d", &age);

    int years = age / 365;
    int remaining_days = age % 365;
    int months = remaining_days / 30;
    int days = remaining_days % 30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}
