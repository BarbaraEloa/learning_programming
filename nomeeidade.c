/**
* Segundo programa: mostrar nome e idade
*
**/
#include <stdio.h>

int main(){
    int idade = 29;
    char nome [25] = "Barbara";
    char sexo = 'f';
    
    printf ("Por favor, digite sua idade: ");
    scanf ("%d", &idade);

    printf ("Por favor, digite o seu nome e aperte enter: ");
    scanf ("%s", &nome);

    printf ("Por favor digite o seu sexo e aperte enter: ");
    scanf (" %c", &sexo);
    
    printf ("Minha idade é: %d\n",idade);
    printf("Meu nome é: %s\n",nome);
    printf ("Meu sexo é: %c", sexo);
}