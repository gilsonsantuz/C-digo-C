#include <stdio.h>

int main(){
//ENTRADA
    float kmhora, msegundo;

    printf("Digite uma velocidade em Km por hora que será convertida em Metros por segundo: ");
    scanf("%f", &kmhora);
//PROCESSAMENTO
    msegundo = kmhora / 3.6;

    //SAÍDA
    printf("O resultado da conversão para metros por segundo foi de: %.2f", msegundo);
    return 1;

}
