#include <stdio.h>

int main(){
//ENTRADA
    int num1, num2;
    float divisao1to2, divisao2to1, resto1to2, resto2to1;
    printf("Digite dois n�meros inteiros que voc� deseja dividir: \n");
    scanf("%d %d", &num1, &num2);
//PROCESSAMENTO
    divisao1to2 = num1 / num2;
    divisao2to1 = num2 / num1;
    resto1to2 = num1 % num2;
    resto2to1 = num2 % num1;
//SA�DA  1 to 2
    printf("A divis�o do primeiro n�mero pelo segundo foi de: %.2f\n", divisao1to2);
    printf("Sendo o dividendo: %d e o divisor: %d \n", num1, num2);
    printf("J� o resto da divis�o foi o seguinte: %.2f\n", resto1to2);
//SA�DA 2 to 1
    printf("A divis�o do segundo n�mero pelo primeiro foi de: %.2f\n", divisao2to1);
    printf("Sendo o dividendo: %d e o divisor: %d \n", num2, num1);
    printf("J� o resto da divis�o foi o seguinte: %.2f\n", resto2to1);
    return 0;
}

