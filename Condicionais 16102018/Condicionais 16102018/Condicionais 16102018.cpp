// Condicionais 16102018.cpp : define o ponto de entrada para o aplicativo do console.
// condicionais = operadores logicos
// == igual
// != diferente
// <menor
// >maior
// <menorigual
// >maiorigual
// condinção = operadoes logicos SEMPRE vai precisar de 2 operandos (termos), resultado da operação pode ser apenas
// (true/ false) verdadeiro ou falso;
// conectores logicos:
// - "e" -  &&
// - "ou" -|| 
// % = valor do resto da divisão
//
//
//
#include "stdafx.h"

int main()
{
	int a = 0;

	if (a == 0)

	{
		printf("a igual a zero");
	}

	if (a != 0)
	{
		printf("a diferente de zero\n");
	}

	int b = 5;

	if (b < a)
	{
		printf("B menor que A"); // a pode menor, pode ser igual e pode ser diferente 
	}

	if (a <= b)
	{
		printf ("A menor ou igual a B")
	}

	// SE
	if (true)
	{
	// este codigo nao sera executado
	}

	If(false)
	{
		// este codigo não sera executado
	}
}

