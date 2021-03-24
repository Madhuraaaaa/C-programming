#include<stdio.h>
typedef struct complex_t {
    float real;
    float imaginary;
} complex_t;

complex_t sum(complex_t a, complex_t b);
complex_t sub(complex_t a, complex_t b);
complex_t mul(complex_t a, complex_t b);
complex_t div(complex_t a, complex_t b);
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

