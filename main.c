#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{
    char nome[50];
    int fone;
    struct lista *prox;
}lista;

void insere(lista *topo, char nomes[50], char fone){
    
}

int main(int argc, char** argv) {
    lista *topo = NULL;
    int opcao;
    do{
        printf("---AGENDA---\n1-Inserir\n2-Listar\n3-Remover\n4-Buscar\n-5Sair\nOpcao:");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                insere();
                break;
            case 2:
                listar();
                break;
            case 3:
                remove();
                break;
            case 4:
                buscar();
                break;
        }
    }while(opcao!=0)
    
    return (EXIT_SUCCESS);
}

