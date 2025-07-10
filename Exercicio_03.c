// Cálculo de Salário com Descontos
// Escreva um programa que solicite ao usuário o valor que ele ganha por hora e o número
// de horas trabalhadas no mês.
// Calcule e mostre o salário bruto, os valores descontados para o Imposto de Renda (11%),
// o INSS (8%) e o sindicato (5%), além do salário líquido (salário bruto - descontos).
// Mostre os dados para o usuário conforme a tabela abaixo:
//     (+) Salário bruto: R$
//     (-) IR (11%): R$
//     (-) INSS (8%): R$
//     (-) Sindicato (5%): R$
//     (-) Descontos: R$
//     (=) Salário líquido: R$

#include <stdio.h>

int main()
{   
    float valor_da_hora, salario_bruto, imposto_de_renda, INSS, sindicato,salario_liquido, descontos;
    int horas_trabalhadas;
    char nome[10];

printf("Digite o valor da hora R$: ");
scanf("%f", &valor_da_hora);

printf("Qual foi o número de horas trabalhadas no mês: ");
scanf("%d", &horas_trabalhadas);

salario_bruto = valor_da_hora * horas_trabalhadas;
imposto_de_renda = salario_bruto * 0.11;
INSS = salario_bruto * 0.08;
sindicato = salario_bruto * 0.05;
descontos = imposto_de_renda + INSS + sindicato;
salario_liquido = salario_bruto - descontos;

printf("\n (+) Salário bruto: R$%.2f\n (-) IR (11): R$%.2f\n (-) INSS (8): R$%.2f\n (-) Sindicato (5): R$%.2f\n (-) Descontos: R$%.2f\n (=) Salário liquido: R$%.2f", salario_bruto, imposto_de_renda, INSS, sindicato, descontos, salario_liquido);}