#include <stdio.h>

int main(){
//ENTRADA
    int num1, num2;
    float divisao1to2, divisao2to1, resto1to2, resto2to1;
    printf("Digite dois números inteiros que você deseja dividir: \n");
    scanf("%d %d", &num1, &num2);
//PROCESSAMENTO
    divisao1to2 = num1 / num2;
    divisao2to1 = num2 / num1;
    resto1to2 = num1 % num2;
    resto2to1 = num2 % num1;
//SAÍDA  1 to 2
    printf("A divisão do primeiro número pelo segundo foi de: %.2f\n", divisao1to2);
    printf("Sendo o dividendo: %d e o divisor: %d \n", num1, num2);
    printf("Já o resto da divisão foi o seguinte: %.2f\n", resto1to2);
//SAÍDA 2 to 1
    printf("A divisão do segundo número pelo primeiro foi de: %.2f\n", divisao2to1);
    printf("Sendo o dividendo: %d e o divisor: %d \n", num2, num1);
    printf("Já o resto da divisão foi o seguinte: %.2f\n", resto2to1);
    return 0;
}

