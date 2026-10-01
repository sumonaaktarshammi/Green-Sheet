#include<stdio.h>
int main()
{
    int total_distance;
    float spent_fuel;

    scanf("%d", &total_distance);
    scanf("%f", &spent_fuel);

    float average = total_distance / spent_fuel;

    printf("%.3f km/l\n", average);
    return 0;


}
