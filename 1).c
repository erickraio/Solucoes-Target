#include <stdio.h>
int main(){

int primeiro = 0;
int segundo = 1;
int resultado;
int numero_testado;

scanf("%d", &numero_testado);

while(1)
{
resultado = primeiro + segundo;
primeiro = segundo;
segundo = resultado;
if (numero_testado < resultado)
{
    printf("O numero nao pertence a sequencia de Fibonacci");
    break;
}

if (numero_testado == resultado)
{
    printf("O numero pertence a sequencia de Fibonacci");
    break;
}
}
}