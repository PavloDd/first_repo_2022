#include <stdio.h>

int main()
{
    double x = 1.155;
    double y = 3.981;
    double task = log10(pow(x, 2) + 4 * x * y + pow(y, 2)) - 12 * cos(x * pow(y, 4)) + (13 * pow(x, 6));
    printf("%lf", task);

}

