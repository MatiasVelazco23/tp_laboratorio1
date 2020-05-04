/*
 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3. Calcular todas las operaciones a) Calcular la suma (A+B) b) Calcular la resta (A-B) c) Calcular la division (A/B) d) Calcular la multiplicacion (A*B) e) Calcular el factorial (A!)
 4. Informar resultados
 a) “El resultado de A+B es: r”
 b) “El resultado de A-B es: r”
 c) “El resultado de A/B es: r” o “No es posible dividir por cero”
 d) “El resultado de A*B es: r”
 e) “El factorial de A es: r1 y El factorial de B es: r2”
 5. Salir
 • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte, que contenga las funciones para realizar las cinco operaciones.
 • En el menú deberán aparecer los valores actuales cargados en los operandos A y B (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
 • Deberán contemplarse los casos de error (división por cero, etc)
 • Documentar todas las funciones

 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "tp.h"



int main(void) {
	setbuf(stdout, NULL);
	int num1; //op1
	int num2; //op2
	char operacion;



	int Resp_Suma;
	int Resp_Resta;
	int Resp_Multiplicacion;
	int Resp_Division;
	int Resp_Factorial_A;
	int Resp_Factorial_B;



	printf("Ingrese un numero\n");
	__fpurge(stdin); //LINUX
	scanf("%d", &num1);

	printf("A es:%d\n", num1);
	 printf("Ingrese una operación [m,d,s,r,f] (!=[m,d,s,r,f] para salir):  \n");

	__fpurge(stdin);//LINUX
	    scanf("%c",&operacion);




	printf("Ingrese un numero\n");
	__fpurge(stdin); //LINUX
	scanf("%d", &num2);
	printf("B es: %d\n", num2);







	  switch(operacion)
		{
	        case'f':
	        {
	        	Resp_Factorial_A=factorial_A(num1);
	        	Resp_Factorial_B=factorial_B(num2);

	        	printf("El factorial de %d es: %d y El factorial de %d es: %d\n",num1,Resp_Factorial_A,num2,Resp_Factorial_B);

	        }
	        break;
			case 's':
			{
				Resp_Suma = sumar(num1, num2);
				printf("El resultado de %d+%d es:%d\n",num1,num2,Resp_Suma);
				break;
			}
			case 'r':
			{
				Resp_Resta = restar(num1, num2);
				printf("El resultado de %d-%d es: :%d\n", num1, num2,Resp_Resta);
				break;
			}
			case 'm':
			{
				Resp_Multiplicacion = multiplicar(num1, num2);
				printf("El resultado de %d*%d es:%d\n", num1, num2,Resp_Multiplicacion);
				break;
			}
			case 'd':
			{
				Resp_Division = dividir(&resultado, num1, num2);

				if (Resp_Division == 0) {
						printf("El resultado de %d/%d es: %.2f\n",num1,num2,resultado);
					} else {
						printf("No es posible dividir por cero\n");
					}
				break;
			}
			default:
				break;

		}
return 0;
    }




