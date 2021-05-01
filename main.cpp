/*File utama program CPP Calculator*/
#include <stdio.h>
#include "calculator.hpp"

int main() {
    char Op;
    double first, second ;
    printf("Enter an operator (+, -, *,): " );
    scanf("%c", &Op );
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second );

    switch (Op) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, tambah(first, second));
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, kurang(first, second));
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, kali(first, second));
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, bagi(first, second));
        break;
    default:
        printf("Wrong input");
    }

    return 0;
}
