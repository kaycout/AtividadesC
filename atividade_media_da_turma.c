#include <stdio.h>

int main(){
    
    int contador;
    int notas;
    int total;
    int media;

    total = 0;
    contador = 1;

    while (contador <= 1){
    printf("Digite a primeira nota:\n");
    scanf("%d", &notas);
    total = total + notas;
    contador = contador + 1;
    }

    media = total / 10;

    printf("O resultado da média da turma é %d\n" ,media); 
    return 0;
}