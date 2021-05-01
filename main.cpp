/*File utama program CPP Calculator*/
#include <stdio.h>
<<<<<<< HEAD
#include "calculator.hpp"
=======
>>>>>>> e49e9291b9a74a048742def0727c0e32c9c5cdfc

int main() {
    char Op;
    double first, second ;
    printf("Enter an operator (+, -, *,): " );
    scanf("%c", &Op );
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second );

    switch (Op) {
<<<<<<< HEAD
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
=======

>>>>>>> e49e9291b9a74a048742def0727c0e32c9c5cdfc
    }

    return 0;
}
