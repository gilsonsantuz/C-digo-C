#include <stdio.h>

int main(){
//ENTRADA
    float kmhora, msegundo;

    printf("Digite uma velocidade em Km por hora que ser� convertida em Metros por segundo: ");
    scanf("%f", &kmhora);
//PROCESSAMENTO
    msegundo = kmhora / 3.6;

    //SA�DA
    printf("O resultado da convers�o para metros por segundo foi de: %.2f", msegundo);
    return 1;

}
