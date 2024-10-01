#include <stdio.h>
int main()
{

char palavra[99];
int repeticoes;

for (int i = 0; i <= 99; i++)
{
    scanf("%c", &palavra[i]);
    if (palavra[i] == '\n')
    {
        break;
    }
}


for (int i = 0; i <= 99; i++)
{
    if (palavra[i] == 'A' || palavra[i] == 'a')
    {
        repeticoes++;
    }
}

printf("%d", repeticoes);

}