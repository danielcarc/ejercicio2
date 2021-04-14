#include <stdio.h>
#include <stdlib.h>


int main()
{
int num1, num2, num3, resultado1, resultado2;
printf("Por favor ingresa un numero ");
scanf("%d", &num1);
printf("Por favor ingresa otro numero ");
scanf("%d", &num2);
printf("Por favor ingresa un ultimo numero ");
scanf("%d", &num3);
resultado1 = num1 + num2;
resultado2 = resultado1 + num3;
printf("El resultado de esta sume es %d ", resultado2);
}