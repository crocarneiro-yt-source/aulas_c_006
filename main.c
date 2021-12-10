#include <stdio.h>
#include <limits.h>

int main()
{
    /*Sintaxe da declaração de variáveis: */
    // tipo_de_dado nome_da_variavel
    int fahr, celsius;
    int lower, upper, step;

    /*
    * normalmente não se usa acentos nem caracteres especiais
    * não pode usar espaço
    * não pode começar com número
    * não pode conter palavras reservadas
    */

    /*
    int - número sem vírgula
    short - número sem vírgula (pequeno)
    long - número sem vírgula (grande)
    float - número com vírgula (pequeno)
    double - número com vírgula (grande)
    char - um único caractere (de 1 byte)
    vetor de caracteres (string) - palavras / texto
    */

   /*
   * Sintaxe da inicialização:
   nome_da_variavel operador_de_atribuição valor (qualquer expressão cujo resultado seja do tipo da variável);
   */

    lower = 0; /* lower limit of temperature table. */
    upper = 300; /* upper limit. */
    step = 20; /* step size */

    fahr = lower;
    while(fahr <= upper)
    {
        celsius = (fahr - 32) * 5 / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
