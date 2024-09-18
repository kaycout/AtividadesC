    #include <stdio.h>

    int main(){

    int contador;        /* numero da nota */
    int nota;           /* nota */
    int total;          /* nota inseridas pelo usuario */
    int media;          /* media */
    
    total = 0;      
    contador = 1; 

    while (contador <= 10){        
    printf("Digite a nota: ");         
    scanf("%d" ,&nota);               
    total = total + nota;            
    contador = contador + 1;            
    } 
    
    media = total / 10; /* divisão */

    printf( "Media da turma é %d\n" ,media ); 
    return 0;
    } 
