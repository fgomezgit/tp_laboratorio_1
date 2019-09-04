/*
 ============================================================================
 Name        : Calculadora.c
 Author      : Fede
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int verMenu(int oper1, int oper2); //declaro la funcion
int A, B;
int main(void)
{

	int opcionSeleccionada;
	int resultadoSuma, resultadoResta, resultadoMultiplicacion;
	float resultadoDivision;
	unsigned long int resultadoFactorialA, resultadoFactorialB;
	int opcion1Hecha = 0; //defino flags para las 3 primeras opciones
	int opcion2Hecha = 0;
	int opcion3Hecha = 0;

	while(1) // loop para mostrar el menú
	{
		opcionSeleccionada = verMenu(A,B); //llamo a la funcion verMenu
		switch(opcionSeleccionada)
		{
			case 1:
				printf("Valor del operando A: ");
				scanf("%d", &A);
				opcion1Hecha = 1;
				break;
			case 2:
				printf("Valor del operando B: ");
				scanf("%d", &B);
				opcion2Hecha = 1;
				break;
			case 3:
				if(opcion1Hecha == 1 && opcion2Hecha == 1)  //si las 2 primeras opciones del menu fueron realizadas realizo las operaciones
				{
					resultadoSuma = suma(A, B);
					resultadoResta = resta(A, B);
					resultadoMultiplicacion = multiplicacion(A, B);
					resultadoDivision = division(A, B);
					resultadoFactorialA = factorial(A);
					resultadoFactorialB = factorial(B);
				}
				else
				{
					printf("\nDebe ingresar los dos operandos para poder realizar las operaciones\n\n");
				}
				opcion3Hecha = 1;
				break;
			case 4:
			    {
			        if(opcion1Hecha == 1 && opcion2Hecha == 1 && opcion3Hecha == 1 ) // solo si los 3 primeros case están hechos
                    {
                        printf("\nEl resultado de A+B es: %d\n",resultadoSuma);
                        printf("El resultado de A-B es: %d\n",resultadoResta);
                        if(B==0)
                        {
                            printf("No es posible dividir por cero\n");
                        }
                        else
                        {
                            printf("El resultado de A/B es: %.2f\n",resultadoDivision);
                        }
                        printf("El resultado de A*B es: %d\n",resultadoMultiplicacion);

                        if(resultadoFactorialA < 1 ) // en el caso de que A sea negativo
                        {
                            printf("El factorial de A no existe ");
                        }
                        else
                        {
                            printf("El factorial de A es: %ld ", resultadoFactorialA);
                        }

                        if(resultadoFactorialB < 1 )// en el caso de que B sea negativo
                        {
                            printf("y el factorial de B no existe\n");
                        }
                        else
                        {
                            printf("y el factorial de B es: %ld\n", resultadoFactorialB);
                        }
                    }
                    else
                    {
                        printf("\nDebe ingresar los dos operandos y calcular todas las operaciones para poder informar los resultados\n\n");
                    }

				}
				break;
			case 5:
				return 0; //sale de la funcion
            default:
                return 0;
		}
	}
}

int verMenu(int oper1, int oper2) //devuelve el resultado de la opcion seleccionada
{
	int opcion;
	printf("\n1. Ingresar el 1er operando (A = %d)\n",oper1);
	printf("2. Ingresar el 2do operando (B = %d)\n",oper2);
	printf("3. Calcular las operaciones\n");
	printf("4. Informar resultados\n");
	printf("5. Salir\n");
	do
	{
		printf("Opcion: ");
		scanf("%d", &opcion);
		if(opcion > 5 || opcion < 1)
		{
			printf("Error, ingrese una opcion valida \n");
		}
	} while (opcion > 5 || opcion < 0);

	return opcion;
}

