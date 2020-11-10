#include <stdio.h>

int main(){
int A = 10;
int B = 5;
int Resultado = 10;

printf("Digite um numero A: ");
scanf("%d", &A);
printf("Digite um numero B: ");
scanf("%d", &B);

if (A>B){
    printf("Resultado: %d", A);
} else {
    if( A==B ){
    printf("Resultado: %d = %d", A,B);
    }
  else { 
    printf("Resultado: %d", B);
  }
}

}