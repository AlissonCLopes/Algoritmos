// ConsoleApplication1.cpp : define o ponto de entrada para o aplicativo do console.
//void = função sem retorno
//int somar2valores(intx,inty)
//intc;
//c=x+y
//returnc;
//
//scanf insere dois parametros
//
//Executar programa: ctrl + F5 ou menu depurar
//Depurar programa
//
//
//


#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void HelloWorld()
{
	printf("\nHello World!\n");
	
}

int Somar2valores(int x, int y)
{
	int c;
	c = x + y;
	return c;
}

int Subtrair2Valores(int x, int y)
{
	int d;
	d = x - y;
	return d;
}

float Dividir2Valores(float x, float y)
{
	float e;
	e = x / y;
	return e;
}

int Multiplicar2Valores(int x, int y)

{
	int f;
	f = x * y;
	return f;
}


void valores()
{
	int a = Somar2valores(55, 44);
	printf("Resultado da soma: %i\n", a);

	int b = 10;
	int c = 15;
	int d = Somar2valores(b, c);
	printf("Resultado da soma: %i\n", d);

	system("pause");
}

int LerNumeroInteiro()

{
	printf("\nFavor digitar um numero inteiro: ");
	int numero;
	scanf_s("%i", &numero);
	return numero;
}

int main()


{
	int primeiroValor = LerNumeroInteiro();
    int segundoValor = LerNumeroInteiro();
	int c = Somar2valores(primeiroValor, segundoValor);
	int d = Subtrair2Valores(primeiroValor, segundoValor);
	float e = Dividir2Valores(primeiroValor, segundoValor);
	int f = Multiplicar2Valores(primeiroValor, segundoValor);
	printf("Resultado da soma: %i\n", c);
	printf("Resultado da subtracao: %i\n", d);
	printf("Resultado da divisao: %f\n", e);
	printf("Resultado da multiplicacao: %i\n", f);
	system("pause");

}

