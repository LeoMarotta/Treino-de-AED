#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ListaX{
    char nome[50];
    int fone;
    struct lista *prox;
}lista;

void inserir(lista **topo, char nomes[50], int fones){
    
    lista *listaS;
    listaS = malloc(sizeof(lista));
    strcpy(listaS->nome,nomes);
    listaS->fone=fones;
    if(*topo==NULL){
        listaS->prox = NULL;
        *topo = listaS;
    }else{
        listaS->prox = *topo;
        *topo = listaS;
    }
}

void listar(lista *topo){
    lista *aux;
    aux = topo;
    if(aux==NULL){
        
    }else{
        do{
            printf("%s/%d->", aux->nome, aux->fone);
            aux = aux->prox;
        }while(aux!=NULL);
    }
}

//void remover(){
//   
//}
//
//void buscar(){
//    
//}

int main(int argc, char** argv) {
    lista *topo = NULL;
    int opcao, fone;
    char nome[50];
    do{
        printf("\n\n---AGENDA---\n1-Inserir\n2-Listar\n3-Remover\n4-Buscar\n5-Sair\nOpcao:");
        scanf("%d", &opcao);
        printf("\n");
        switch(opcao){
            case 1:
                printf("Digite nome que deseja inserir:");
                scanf("%s", nome);
                printf("\nDigite o telefone do contato que deseja inserir:");
                scanf("%d", &fone);
                inserir(&topo, nome, fone);
                break;
            case 2:
                listar(topo);
                break;
            //case 3:
            //    remover();
            //    break;
            //case 4:
            //    buscar();
            //    break;
        }
    }while(opcao!=5);
    
    return (EXIT_SUCCESS);
}

