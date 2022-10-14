/* Write a program to convert Fahrenheit temperature to centigrade. This program explains floatin-point arithmetic. The formula is  c = 5/9*(f-32). In the program, if we write the formula using 5/9 then, it will result into 0. Because in integer arithmetic 5/9 = 0.

            To get the correct answer we should write the formula as c= 5*(f-32)/9 or   c = 5.0/9*(f-32) or  c = 5.0/9.0*(f-32) so that integer gets upgrsded to real */

#include <stdio.h>

void main()

{
    float fahr, cent;
    printf("Give the value of temperature in Fahremheit\n");
    scanf("%f", &fahr);
    cent = 5 * (fahr - 32) / 9;
    printf("Fahrenheit temperature= %f\n", fahr);
    printf("Centigrade temperature = %f\n", cent);
}