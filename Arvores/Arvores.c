/**
            �rvore

        Fundamento

    Uma �rvore � uma cole��o finita de n>=0
    nodos. Se n=0, dizemos que a �rvore
    � nula, caso contr�rio, uma �rvore apresenta
    as seguintes caracter�sticas:
        . Existe um nodo especial denominado RAIZ;
        . Os demais s�o particionados em T1, T2...Tn
        estruturas de �rvores;
        . As estruturas T1, T2...Tn denominam-se
        sub�rvores.
    A exig�ncia de que as estruturas T1, T2 e Tn
    sejam cole��es desjuntas, garante que um mesmo
    nodo n�o aparecer� em mais de uma �rvore,
    ao mesmo tempo, ou seja, nunca teremos
    sub�rvores interligadas.
    Observe que cada estrutura T1 � organizada
    na forma de �rvore, caracterizando uma defini��o
    Recursiva.

    Exemplo:

                                       a
                                     / | \
                                    /  |  \
                                   /   |   \
                                  /    |    \
                                 /     |     \
                                b      c      d
                               /|\     |     / \
                              e f g    h    i   s
                                |     / \
                                k    L   m
                            Representa��o Hier�rquica
*/

/**
        Topologia

    A estrutura de uma �rvore � constituida
    de GRAU, NIVEL e ALTURA.
    . GRAU   - Corresponde o numero de filhos conectado ao Pai;
    . NIVEL  - Corresponde a posi��o do nodo na �rvore;
    . Altura - Corresponde a posi��o mais alta da �rvore.

    OBS: Quando o nodo n�o possui dependente
    o seu grau � conhecido como folha
    ou null.
    A raiz pode receber o n�vel (0 ou 1)
    dependendo do crit�rio a ser adotado.

        Simbolo  |Nivel    |Grau    |Altura    |
             b   |   1     |  3     |    1     |
             k   |   3     |  folha |    3     |
             a   |   0     |  3     |    0     |
             l   |   3     | folha  |    3     |
      ------------------------------------------

    As opera��es permitidas em �rvore s�o>

    . tree_insere
    . tree_remove
    . tree_consulta
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct arvore{
    int codigo;
    struct arvore *next,*back, *up;
}arvore;

struct arvore *tree, *auxiliar, *raiz;

int aloca = 0;

int main(){

    Inserir();
    system("pause");
    Exibir();
    system("pause");
    Inserir();
    system("pause");
    Exibir();
    system("pause");
    Inserir();
    system("pause");
    Exibir();
    system("pause");

    return EXIT_SUCCESS;
}


Inserir(){

    if(raiz == NULL){
        tree = (arvore*) malloc(sizeof(arvore));
        tree -> back = NULL;
        tree -> next = NULL;
        tree -> up   = NULL;
        auxiliar = tree;
        raiz = tree;
        EnterData();
    }else{

        do{
            printf("Deseja alocar 1, 2 ou 3: ");
            scanf("%d", &aloca);
            fflush(stdin);

            if( (aloca == 1) || (aloca == 2) || (aloca == 3) ){
                break;
            }
        }while(1);

        if(aloca == 1){
            Aloca_Esquerda();
        }
        else if(aloca == 2){
            Aloca_Meio();
        }
        else{
            Aloca_Direita();
        }
    }
}

EnterData(){

    printf("Digite o Codigo: ");
    scanf("%d",&tree->codigo);

}

Aloca_Esquerda(){

    if(tree->back == NULL){

        tree->back = NULL;
        tree->up = NULL;
        auxiliar = tree;

    }else{
    }
}

Aloca_Direita(){

    if(tree->next == NULL){
        tree = (arvore*)malloc(sizeof(arvore));
        tree->next = NULL;
        tree->up = NULL;
        auxiliar = tree;
        EnterData();
    }else{
        tree = tree -> up;
        tree = (arvore*)malloc(sizeof(arvore));
        tree -> next = NULL;
        tree -> up = NULL;
        auxiliar = tree;
        EnterData();
    }
}

Aloca_Meio(){
    tree = (arvore*)malloc(sizeof(arvore));
    tree -> up = NULL;
    tree -> next = NULL;
    tree -> back = NULL;
    auxiliar = tree;
    EnterData();
}

Exibir(){

    if(raiz == NULL){
        printf("A arvore ainda nao nasceu!!!\n");
    }else{

        printf("Meio:\n");

        for( tree = raiz; tree != NULL ; tree = tree -> up ){
            printf("%d\n", tree->codigo);
        }

        printf("Esquerda:\n");

        for( tree = raiz; tree != NULL ; tree = tree -> back ){
            printf("%d\n", tree->codigo);
        }

        printf("Direita:\n");

        for( tree = raiz; tree != NULL ; tree = tree -> next ){
            printf("%d\n", tree->codigo);
        }
    }
}
