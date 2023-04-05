#include <stdio.h>
int main()
{
struct dados_de_aluno{
    char nome[50];
    float media;
    int ano;
    };
    
    struct dados_de_aluno aluno;
    printf("Digite o nome do Aluno.");
    fgets(aluno.nome, 50, stdin);         /**  fgets - mais aconselhado a colocar em cadeia de caracteres e logo ao ficar colocar stdin**/
    printf("Digite a media escolar.");
    scanf("%f", &aluno.media);
    printf("Digite o ano escolar.");
    scanf("%d", &aluno.ano);
    
    printf("Nome...: %s", aluno.nome);
    printf("Media...: %f\n", aluno.media);
    printf("Ano...: %d\n", aluno.ano);
    return 0;
}
