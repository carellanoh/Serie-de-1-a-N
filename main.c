#include <stdio.h>

int main()
{
    int n = 0;
    printf("Programa que imprime todos los numeros naturales desde el 1 hasta un numero introducido por teclado \n");
    printf("Ingresa un numero entero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        printf("# %d \n", i);
    return 0;
}
