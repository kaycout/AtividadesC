
#include <stdio.h>

    int main ( void){

    int contador; 
    int notas; 
    int total; 
    float media;
   
    total = 0; 
    contador = 0; 

        printf( "Digite a nota, -2 para finalizar:\n" );
        scanf("%d", &notas);

    while ( notas != -2){
        total = total + notas;
        contador = contador + 1; 
        printf( "Digite a nota, '-2' no fim:\n" );
        scanf( "%d", &notas); 
    }

    if ( contador != 0) {
        media = ( float ) total / contador;
        printf( "O resultado da média da turma é %.2f\n", media );
    } else {
        printf( "Nota não informada\n" );
    }
    return 0; 
}