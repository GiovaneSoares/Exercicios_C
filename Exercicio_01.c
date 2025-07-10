#include <stdio.h>

//Esse programa tem como requisito funcional, soliciitar quatro notas bimestrais, apresentar a média delas e informar se o aluno está aprovado ou reprovado.

int main()
{
    float primeiranota, segundanota, terceiranota, quartanota, media;
    char nome[50];

    printf("Diigte o seu nome: ");
    scanf("%s", &nome);
    printf("Digite o valor da primeira nota: ");
    scanf("%f", &primeiranota);
    printf("Digite o valor da segunda nota: ");
    scanf("%f", &segundanota);
    printf("Digite o valor da terceira nota: ");
    scanf("%f", &terceiranota);
    printf("Digite o valor da quarta nota: ");
    scanf("%f", &quartanota);   

    media = (primeiranota + segundanota + terceiranota + quartanota) / 4;

    printf("%s! Sua média %.2f\n", nome, media);

    if(media == 100){
        printf("Aprovado com distinção.");
    }

    else if(media >= 70){
        printf("Aprovado!");
    }
    
    else
    printf("Reprovado");

return 0;
}