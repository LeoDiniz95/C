/**
    Filas

    Fundamentos:

        Uma fila � um tipo especial
    de lista linear em que as inser��es
    s�o realizadas numa extremidade
    ficando as remo��es restritas a outra.
        O extremo onde os elementos s�o inseridos
    � denomidado 'final da fila', e aquele
    de onde s�o removidos � denominado come�o da fila.
        Cada vez que  ma opera��o de inser��o
    � executada, um novo elemento � colocado no
    final da fila. Na remo��o, � sempre retornado
    o elemento que aguarda h� mais tempo na fila,
    ou seja, aquele posicionado no come�o.
        A ordem de sa�da corresponde diretamente
    a ordem de entrada dos elementos na fila,
    de modo que os primeiros elementos que entram
    s�o os primeiros a sair.
        Em vista deste comportamento, as filas
    s�o denominadas LISTAR FIFO(First in/
    First out).
            Opera��es Permitidos Fila Queue - Fila:
        Enqueue - Insere elemento na fila;
        Dequeue - Remove elemento na fila;
        Seaqueue - Pesquisa elemento na fila.
*/

#include <stdio.h>
#include <stdlib.h>

#define N_CARACTERES        15

typedef struct fila{
    int codigo;
    char nome[N_CARACTERES];
    struct fila *next, *back;
}fila;

struct fila *inicio, *auxiliar, *corrente;
int tamanhoDaFila = 0;
int filaFlag = 0;

int main(){
    inicio = NULL;
    auxiliar = NULL;
    corrente = NULL;

    int op;

    printf("Digite o tamanho da fila: ");
    scanf("%d", &tamanhoDaFila);
    fflush(stdin);

    do{

        printf("\t1. Entrar na Fila\n");
        printf("\t2. Mostrar Fila\n");
        printf("\t3. Sair Da Fila\n\n");

        printf("Digite o nome da operacao que deseja fazer: ");
        scanf("%d", &op);
        fflush(stdin);

        printf("\n");

        switch(op){
            case 1:
                if(filaFlag <= tamanhoDaFila){
                    EntraNaFila();
                    filaFlag++;
                }else{
                    printf("Fila chegou ao limite.\n");
                }
                break;

            case 2:
                MostrarFila();
                break;

            case 3:
                SairDaFila();
                break;

            default:
                printf("Operacao inexistente.\n");
                system("pause");
                break;
        }

        char Saida='n';


        do{
            printf("Deseja sair do programa? <S/N> : ");
            scanf("%c", &Saida);
            fflush(stdin);

            if(Saida == 'S' || Saida == 's' || Saida == 'N' || Saida == 'n'){
                break;
            }
        }while(2);

        if(Saida == 'S' || Saida == 's'){
            break;
        }

    }while(1);

    return EXIT_SUCCESS;
}

EnterData(){
    printf("Digite o codigo: ");
    scanf("%d", &corrente->codigo);
    fflush(stdin);

    printf("Digite o nome: ");
    scanf("%s", &corrente->nome);
    fflush(stdin);

    system("pause");
}

EntraNaFila(){
    if(inicio == NULL){
        corrente = (fila*) malloc(sizeof(fila));
        corrente -> next= NULL;
        corrente -> back = NULL;
        auxiliar = corrente;
        inicio = corrente;
        EnterData();
    }else{
        corrente = (fila*) malloc(sizeof(fila));
        corrente -> next = NULL;
        auxiliar -> next = corrente;
        corrente -> back = auxiliar;
        EnterData();
    }
}

SairDaFila(){
    if(inicio == NULL){
        printf("A fila esta vazia.\n");
    }else{
        if(inicio->next == NULL){
            auxiliar = inicio;
            free(inicio);
            inicio = NULL;
        }else{
            auxiliar = inicio;
            inicio = inicio -> next;
            auxiliar -> next = NULL;
            inicio -> back = NULL;
            free(auxiliar);
        }
    }
}

MostrarFila(){
    if(inicio==NULL){
        printf("A fila esta vazia.\n");
    }else{
        for(corrente = inicio; corrente != NULL; corrente = corrente->next){
            printf("%d %s\n", corrente->codigo, corrente->nome);
        }
    }
    system("pause");
}
