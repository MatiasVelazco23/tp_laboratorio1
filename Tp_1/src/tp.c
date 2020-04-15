/*
 * tp.c
 *
 *  Created on: 15 abr. 2020
 *      Author: matias
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int sumar(int operador1,int operador2)
	{
		int ValorRetorno;

		ValorRetorno = operador1 + operador2;

		return ValorRetorno;
	}

int restar (int operador1,int operador2)
	{
		int ValorRetorno;
		ValorRetorno=operador1 - operador2;
		return ValorRetorno;
	}
int multiplicar (int operador1,int operador2)
	{
		int ValorRetorno;
		ValorRetorno= operador1*operador2;
		return ValorRetorno;
	}

int dividir (float* pResultado,int operador1, int operador2)
{
	float resultado;
	int ValorRetorno = -1;
	if(pResultado != NULL &&operador2 != 0)
	{
		resultado = (float) operador1 / operador2;
		*pResultado = resultado;
		ValorRetorno = 0;
	}
	return ValorRetorno;
}

int factorial_A(long int a)
{
	int retorno=1;
		int i;
		for(i=1;i<=a;i++){
			retorno*=i;
		}
	    return retorno;
}
int  factorial_B(long int b)
{
	int retorno=1;
	int i;
	for(i=1;i<=b;i++){
		retorno*=i;
	}
    return retorno;
}

