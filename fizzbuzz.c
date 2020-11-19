/**
 * Fizzbuzz: Imprima todos números de 1 até 100. Caso o número seja múltiplo de 3 imprima fizz,
 * caso o número seja múltiplo de 5 imprima buzz, caso o número seja múltiplo de 3 e 5
 * imprima fizzbuzz.
*/

#include <stdio.h>

int main(){
    for(int i = 1; i <= 100; i++){
        if( i % 5 == 0 && i % 3 == 0){
            printf(" fizzbuzz");
        }else if( i % 3 == 0){
            printf(" fizz");
        }else if( i % 5 == 0){
            printf(" buzz");
        
        }else{
            printf(" %d", i);
        }
    }
}