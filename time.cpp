#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void cabecalho(){
    printf("OLÁ, SEJA BEM-VINDO AO MENU DE TIMES\n");
    printf("ESCOLHA AS ALTERNATIVAS ABAIXO\n");
    printf("Vitoria [1] Bahia [2] Flamengo [3] São Paulo [4] Outros [5]\n");
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    cabecalho();

    int op;
    char ntime[50];

    printf("Qual é a sua opção? ");
    scanf("%i", &op);

    switch (op) {
            case 1:
            printf("Você escolheu o Vitoria\n");
            break;

            case 2:
            printf("Você escolheu o Bahia\n");
            break;

            case 3:
            printf("Você escolheu o Flamengo\n");
            break;

            case 4:
            printf("Você escolheu o São Paulo\n");
            break;

            case 5:
            printf("Você escolheu outra opção. Digite o seu time: ");
            while ((getchar()) != '\n'); // limpa buffer
            scanf("%[^\n]", ntime);

            printf("Você escolheu um novo time: %s\n", ntime);
            break;

            default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}