// Condicionais Aula 18102018.cpp : define o ponto de entrada para o aplicativo do console.
// e - && verdadeiro somente quando todas as condições forem verdadeiras
// ou || basta que uma condição seja verdadeira p/ ser verdadeiro

#include <iostream>
#include "pch.h"

float lersalario() {
	printf("Favor digitar seu salario: ");
	float salario = 0;
	scanf_s("%f", &salario);
	return salario;
}


float CalculaIR(float salario, float aliquota, double deducao)
{
	return (salario * aliquota) - deducao;
}

void ApresentarIR(float salario)
{
	double ir = 0;

	if (salario <= 1903.98)
	{
		printf("Isento");
	}
	else if (salario <= 2826.65)
	{
		ir = CalculaIR(salario * 0.075) - 142.80);
		printf("Aliquota: 7.5%, deducao: 142.8\n");
		printf("Valor IR: %f", ir);
		printf("Sobrou: %f", salario - ir);
	}
	else if = (salario <= 3751.05)
	{
		ir = CalculaIR(salario * 0.015) - 354.80);
		printf("Aliquota: 15.0%, deducao: 354.80\n");
		print("Valor IR: %f", ir);
		printf("Sobrou: %f", salario - ir);
	{
	else if = (salario <= 4.664.68)
	{
		ir = CalcularIR(salario * 22.5) - 636.13);
		printf("Aliquota: 22.5%%, deducao: 636.13\n)");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}
	else = (salario > 4.664.69) {
		ir = CalculaIR(salario, 0.275, 869.36);
		printf("Aliquota: 27.5%%, deducao: 869.36");
		printf("Valor IR: %f", ir);
		printf("Sobrou: %f", salario - ir);
	}

}		




