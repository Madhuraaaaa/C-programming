/**
 * @file calculations.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
/**
 * @brief 
 * 
 */
typedef struct complex_t {
    float real;
    float imaginary;
} complex_t;
/**
 * @brief structure complex_t 
 * 
 * @param a 
 * @param b 
 * @return complex_t 
 */
complex_t sum(complex_t a, complex_t b);
/**
 * @brief addition of two complex numbers
 * 
 * @param a 
 * @param b 
 * @return complex_t 
 */
complex_t sub(complex_t a, complex_t b);
/**
 * @brief subtraction of two complex numbers
 * 
 * @param a
 * @param b 
 * @return complex_t 
 * @return complex_t 
 */
complex_t mul(complex_t a, complex_t b);
/**
 * @brief multiplication of two complex numbers
 * 
 * @param a 
 * @param b 
 * @return complex_t 
 */
complex_t div(complex_t a, complex_t b);
/**
 * @brief division of two complex numbers
 * 
 * @param a 
 * @param b 
 * @return complex_t 
 */

complex_t sum(complex_t a, complex_t b){
    complex_t result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return (result);
}
/**
 * @brief addition
 * 
 * @param a 
 * @param b 
 * @return complex_t 
 */
complex_t sub(complex_t a, complex_t b){
    complex_t result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return (result);
}
/**
 * @brief subtraction
 * 
 * @param a 
 * @param b 
 * @return complex_t 
 */
complex_t mul(complex_t a, complex_t b){
    complex_t result;
    result.real = (a.real * b.real-a.imaginary*b.imaginary);
    result.imaginary = (a.real * b.imaginary+ a.imaginary*b.real);
    return (result);
}
/**
 * @brief multiplication
 * 
 * @param a 
 * @param b 
 * @return complex_t 
 */
complex_t div(complex_t a, complex_t b){
    complex_t result;
    float x = a.real*b.real + a.imaginary*b.imaginary;
    float y = a.imaginary*b.real - a.real*b.imaginary;
    float z = b.real*b.real + b.imaginary*b.imaginary;
    result.real = x/z;
    result.imaginary = y/z;
    return (result);
}
/**
 * @brief division
 * 
 */

