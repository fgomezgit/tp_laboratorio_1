/*
 * operaciones.h
 *
 *  Created on: 4 sep. 2019
 *      Author: fgomez
 */



/**
 * \brief Solicita dos números al usuario y calcula la suma
 * \param num1 Se carga el primer numero ingresado
 * \param num2 Se carga el segundo numero ingresado
 * \return El resultado de la suma
 *
 */
int suma (int num1, int num2)
{
	int resultado;
	resultado = num1 + num2;
	return resultado;
}
/**
 * \brief Solicita dos números al usuario y calcula la resta
 * \param num1 Se carga el primer numero ingresado
 * \param num2 Se carga el segundo numero ingresado
 * \return El resultado de la resta
 *
 */
int resta (int num1, int num2) //devuelve el resultado de la resta
{
	int resultado;
	resultado = num1 - num2;
	return resultado;
}
/**
 * \brief Solicita dos números al usuario y calcula división
 * \param num1 Se carga el primer numero ingresado
 * \param num2 Se carga el segundo numero ingresado
 * \return El resultado de la division con decimales, si num2 es 0 develve 0
 *
 */
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
/**
 * \brief Solicita dos números al usuario y calcula la multiplicación
 * \param num1 Se carga el primer numero ingresado
 * \param num2 Se carga el segundo numero ingresado
 * \return El resultado de la multiplicacion
 *
 */
int multiplicacion (int num1, int num2)
{
	int resultado;
	resultado = num1 * num2;
	return resultado;
}
/**
 * \brief Solicita un número al usuario y calcula su factorial
 * \param num1 Se carga el numero ingresado
 * \return El resultado de la multiplicacion
 *
 */
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
