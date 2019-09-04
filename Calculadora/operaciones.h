/*
 * operaciones.h
 *
 *  Created on: 4 sep. 2019
 *      Author: fgomez
 */

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
float division (int num1, int num2) // uso de float para usar decimales
{
	float resultado;
	if(num2 == 0) // si num2 es 0, sale de la funcion con 0, después se chuequea si es error
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
unsigned long int factorial (int num) // unsigned long int no contienen negativos
{
	unsigned long int resultado;
	if(num < 0)//si ingreso un numero negativo retorno 0 para identificar error
    {
        resultado = 0;
    }
	else if(num == 0) // sino, si es 0, es 1
	{
		resultado = 1;
	}
	else
	{
		resultado = num * factorial(num-1);	//la funcion recursiva factorial abre num+1 instancias hasta llegar a 0
	}
	return resultado;
}

