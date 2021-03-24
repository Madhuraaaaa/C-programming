#include <stdio.h>
#include "calculations.h"


int main(){
    complex_t a, b, res;
    a.real=7;
    a.imaginary=6;
    b.real=2;
    b.imaginary=3;
    res = sum(a, b);
    printf("Sum = %.1f + %.1fi \n", res.real, res.imaginary);
    res = sub(a, b);
    printf("Difference = %.1f +( %.1f)i \n", res.real, res.imaginary);
    res = mul(a, b);;
    printf("Multiplication = %.1f  +( %.1f)i \n", res.real, res.imaginary);
    if (b.real == 0 && b.imaginary == 0)
        printf("Division by 0 + 0i isn't allowed.");
    else
        res = div(a, b);
        printf("Division  = %.1f +( %.1f)i \n", res.real, res.imaginary);
    return 0;
}

