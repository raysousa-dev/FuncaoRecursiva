#include <stdio.h>
#include <stdlib.h>
 
int fatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
 
    return n * fatorial(n - 1);
}
 
int main()
{
    int numero, resultado;
 
    printf("Digite um numero: ");
    scanf("%d", &numero);
 
    resultado = fatorial(numero);
 
    printf("\n%d! = %d\n", numero, resultado);
 
    system("pause");
    return 0;
}