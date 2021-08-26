//Bibliotecas Standar
#include <stdlib.h>
#include <stdio.h>

//Bibliotecas del usuario
#include <../libs/ComplexNumber.h>

static ComplexNumber initNewComplexNumber (ComplexNumber newComplexNumber);

static ComplexNumber initNewComplexNumber (ComplexNumber newComplexNumber)
{
  newComplexNumber->real = 0;
  newComplexNumber->imaginary = 0;
  return newComplexNumber;
}

ComplexNumber newComplexNumber(float real, float imaginary)
{
  ComplexNumber myComplexNumber = NULL;
  myComplexNumber = malloc(sizeof(struct _Complex_Number));
  myComplexNumber = setNewComplexNumber(myComplexNumber);
  return myComplexNumber;
}




