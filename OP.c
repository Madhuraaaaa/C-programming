#include <stdio.h>
typedef struct complex_t {
    float real;
    float imaginary;
} complex_t;

complex_t sum(complex_t a, complex_t b);
complex_t sub(complex_t a, complex_t b);
complex_t mul(complex_t a, complex_t b);
complex_t div(complex_t a, complex_t b);

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

complex_t sum(complex_t a, complex_t b){
    complex_t result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return (result);
}
complex_t sub(complex_t a, complex_t b){
    complex_t result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return (result);
}
complex_t mul(complex_t a, complex_t b){
    complex_t result;
    result.real = (a.real * b.real-a.imaginary*b.imaginary);
    result.imaginary = (a.real * b.imaginary+ a.imaginary*b.real);
    return (result);
}
complex_t div(complex_t a, complex_t b){
    complex_t result;
    float x = a.real*b.real + a.imaginary*b.imaginary;
    float y = a.imaginary*b.real - a.real*b.imaginary;
    float z = b.real*b.real + b.imaginary*b.imaginary;
    result.real = x/z;
    result.imaginary = y/z;
    return (result);
}

