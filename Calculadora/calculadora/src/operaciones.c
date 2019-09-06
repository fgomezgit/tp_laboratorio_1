/*
 * operaciones.h
 *
 *  Created on: 4 sep. 2019
 *      Author: fgomez
 */

#include <stdio.h>
#include "operaciones.h"

int suma (int num1, int num2)
{
	int resultado;
	resultado = num1 + num2;
	return resultado;
}

int resta (int num1, int num2)
{
	int resultado;
	resultado = num1 - num2;
	return resultado;
}

float division (int num1, int num2)
{
	float resultado;
	if(num2 == 0)
    {
        return 0;
    }
    else
    {
        resultado = num1 / num2;
        return resultado;
    }
}

int multiplicacion (int num1, int num2)
{
	int resultado;
	resultado = num1 * num2;
	return resultado;
}

unsigned long int factorial (int num)
{
	unsigned long int resultado;
	if(num < 0)//si ingreso un numero negativo retorno 0 para identificar error
    	{
        	resultado = 0;
    	}
	else if(num == 0) // sino, si es 0, es el factorial es 1
	{
		resultado = 1;
	}
	else
	{
		resultado = num * factorial(num-1); //la funcion recursiva factorial abre num+1 instancias hasta llegar a 0
	}
	return resultado;
}
