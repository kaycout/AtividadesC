#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4, mediafinal;

    printf("Digite a primeira nota:\n");
     scanf("%f",&nota1);
    printf("Digite a segunda nota:\n");
     scanf("%f",&nota2);
    printf("Digite a terceira nota\n");
     scanf("%f",&nota3);
    printf("Digite a quarta nota\n");
     scanf("%f",&nota4);
    
    mediafinal = (nota1 + nota2 + nota3 + nota4) / 4;

    if (mediafinal >= 6){
        printf("VOCÊ ESTÁ APROVADO! - Sua média final é: %f\n", mediafinal);
}

    else{   
    printf("VOCÊ ESTÁ REPROVADO! - Sua média final é: %f\n", mediafinal);
} 

}