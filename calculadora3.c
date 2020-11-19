#include <stdio.h>

int main(){
    int A = 10;
    int B = 5;
    char Operacao = 'a';

    while(Operacao != 'c'){
    printf("Digite A: ");
    scanf("%d", &A);
    printf("Digite B: ");
    scanf("%d", &B);
    printf("Por favor, digite a operacao:");
    scanf(" %c", &Operacao); 

    if (Operacao == 'a'){
    printf("Resultado: %d", A+B);
    }
    if (Operacao == 's'){
    printf("Resultado: %d", A-B);
    }
    if (Operacao == 'd'){
    printf("Resultado: %d", A/B); 
    }
    if (Operacao == 'm'){
    printf("Resultado: %d", A*B);
    }

    if(Operacao != 'a' && Operacao != 's' && Operacao != 'd' && Operacao != 'm'){

    printf("Essa operacao nao existe");
    }                                                                                                                                                         
}
}