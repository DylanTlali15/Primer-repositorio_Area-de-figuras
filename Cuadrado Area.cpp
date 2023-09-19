#include <iostream>

int main()
{
	int lado, area;
	printf("Lado:");
	scanf_s("%i", &lado);
	printf("Area:");
	scanf_s("%d", &area);
	area = lado * lado;
	printf("El area del cuadrado es %10i  %10i tiene area de %10i", lado, lado, area);
}