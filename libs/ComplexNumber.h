/**
 * @Author Pedro Martínez
 * @Date 17 Agosot 2021
 * @Name ComplexNumber.h
 * @Copyright TDA Otoño 2021
 */

#ifndef ComplexNumber_h
#define ComplexNumber_h

//Bibliotecas Standar

#include <stdio.h>

//User Libraries


//Data Types

struct _Complex_Number{
  float real;
  float imaginary;
};

//Wrapper

typedef struct _Complex_Number * ComplexNumber;

//Generator / Constructors

ComplexNumber newComplexNumber(float real, float imaginary);



#endif
