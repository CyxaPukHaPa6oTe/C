#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
    double a, b, c;
    double x1, x2, d;
    char Vibor;
/*
    a = 1.2
    b = 10
    c = 3.3
*/

    do {
        printf("Vvedite A: ");
        scanf("%lf", &a);
        printf("Vvedite B: ");
        scanf("%lf", &b);
        printf("Vvedite C: ");
        scanf("%lf", &c);

        d = pow(b, 2) - 4 * a * c;
        printf("d - %lf \n", d);

        if (d > 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("x1 - %lf \n", x1);
            printf("x2 - %lf \n", x2);
        }
        else if (d == 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            printf("x - %lf \n", x1);
        }
        else if (d < 0) {
            printf("Korney net\n");
        }

        printf("Hotite Restart prog? (W/Another letter): ");
        scanf(" %c", &Vibor);

    } while (Vibor == 'W' || Vibor == 'w');

    return 0;}
