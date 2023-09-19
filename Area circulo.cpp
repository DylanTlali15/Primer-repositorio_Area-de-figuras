#include <stdio.h>
void main()
{
	float radio, resultado, pi, area;
	printf("Radio:");
	scanf_s("%f", &radio);
	resultado = radio * radio;
	float pi = 3.14159;
	area = pi * resultado;
	printf("Area del circulo:%10.4f", area);

}