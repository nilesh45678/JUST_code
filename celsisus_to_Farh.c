#include <stdio.h>
#include <stdlib.h>
int main()
{
    double C = 0;
    double F = 0;
    double Start = 0;
    double End = 0;
    double Step = 0;

    printf("Enter the Start Value temperture in Celsius:");
    scanf("%lf", &Start);

    printf("Enter the End value temperture in Celsius:");
    scanf("%lf", &End);

    printf("Enter the Step Size:");
    scanf("%lf", &Step);

    printf("+---------+---------+\n");
    printf("| Celsius | Fahrenheit |\n");
    printf("+---------+---------+\n");
  
    for (C = Start; C < End; C += Step)
    {
        F = (C * 1.8)+32;
        
        printf("|%8.2lf |%8.2lf |\n", C, F);

    }
    printf("+---------+---------+\n");

    return 0;
}