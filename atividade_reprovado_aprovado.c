#include <stdio.h>

int main(){
    int aprov = 0;
    int reprov = 0;
    int aluno = 1;
    int rs;

    while (aluno <=10){
        printf("Exiba o resultado (1=aprov, 2=reprov);\n");
        scanf("%d", &rs);

        if(rs == 1){
            aprov = aprov + 1;
        }
        else{
            reprov = reprov + 1;
        }

        aluno = aluno + 1;
    }
    printf("Alunos aprovados %d\n", aprov);
    printf("Alunos reprovados %d\n", reprov);

    if(aprov > 8){
        printf("Bônus!\n");
    }
    return 0;
}