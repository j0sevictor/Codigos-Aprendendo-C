#include <stdio.h>
#define MEDIAMINIMA 5.0

int main(){

    int codTurma, melhorTurma, numAlunosTurma, numAprovados;
    int matriculaAluno, numNotasAluno;
    int melhorAluno, piorAluno;
    float nota, somaNotas, mediaAluno;
    float melhorMedia, piorMedia;
    float aproveitamentoTurma, melhorAproveitamento;


    melhorAproveitamento =  -1;

    printf("\nCODIGO DA TURMA: ");
    scanf("%d", &codTurma);

    while(codTurma != -1){

        melhorMedia = -1;
        piorMedia = 11;
        numAprovados = 0;
        numAlunosTurma = 0;

        printf("   MATRICULA DO ALUNO: ");
        scanf("%d", &matriculaAluno);
        while (matriculaAluno != -1){

            numNotasAluno = 0;
            somaNotas = 0;
            numAlunosTurma++;

            printf("      NOTA DO ALUNO: ");
            scanf("%f", &nota);
            while (nota != -1.0){
                numNotasAluno++;
                somaNotas += nota;

                printf("      OUTRA NOTA DO ALUNO: ");
                scanf("%f", &nota);
            }

            mediaAluno = (float) somaNotas/numNotasAluno;

            if (mediaAluno >= MEDIAMINIMA){
                numAprovados++;
            }

            if (mediaAluno > melhorMedia){
                melhorMedia = mediaAluno;
                melhorAluno = matriculaAluno;
            }
            if (mediaAluno < piorMedia){
                piorMedia = mediaAluno;
                piorAluno = matriculaAluno;
            }

            printf("   MATRUCULA DE OUTRO ALUNO: ");
            scanf("%d", &matriculaAluno);
        }

        aproveitamentoTurma = ((float) numAprovados/numAlunosTurma) * 100;
        if (aproveitamentoTurma > melhorAproveitamento){
            melhorAproveitamento = aproveitamentoTurma;
            melhorTurma = codTurma;
        }

        printf("\nTURMA %d", codTurma);
        printf("\nMELHOR ALUNO: %d, MEDIA: %.2f", melhorAluno, melhorMedia);
        printf("\nPIOR ALUNO:   %d, MEDIA: %.2f", piorAluno, piorMedia);
        printf("\nNUMERO DE APROVADOS: %d", numAprovados);

        printf("\n\nCODIGO DE OUTRA TURMA: ");
        scanf("%d", &codTurma);
    }

    printf("MELHOR APROVEITAMENTO (%.1f%%) TURMA: %d", melhorAproveitamento, melhorTurma);


    return 0;
}
