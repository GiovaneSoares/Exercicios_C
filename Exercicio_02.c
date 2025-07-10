// Desenvolva um programa que calcule o peso ideal de uma pessoa, usando fórmulas específicas para homens e mulheres.
// Fórmulas:
// Homens: (72.7 * h) - 58
// Mulheres: (62.1 * h) - 44.7

#include <stdio.h>
#include <string.h>
int main()
{
    char genero[50];
    float altura, formula;

    printf("Qual genero voce se identifica? Ex..(Homem/Mulher): ");
    scanf("%s", genero);

if(strcmp(genero, "Homem") == 0 || strcmp(genero, "HOMEM") == 0) {
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    formula = (72.7 * altura) - 58;
    printf("PESO IDEAL: %.2f kg", formula);
}

else if(strcmp(genero, "Mulher") == 0 || strcmp(genero, "MULHER") == 0) {
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    formula = (62.1 * altura) - 44.7;
    printf("PESO IDEAL: %.2f kg", formula);
}

else {
    printf("Digite um genero valido! Ex..(Homem/Mulher): ");
}

}