/**
        Arvore Binaria

    Uma Árvore Binária é uma árvore
    que pode ser nula, ou então, tem as
    seguintes características:
        . Existe um nodo especial denominado RAIZ;
        . Os demais nodos são particionados em T1, T2
        estruturas dejuntas de árvores Binárias;
        . T1 é denominado subárvore esquerda e
        T2 subárvore a direita;
    Árvore Binária é um caso especial
    de árvores em que nenhum nodo tem
    grau superior a 2, isto é, nenhum nodo tem
    mais que dois filhos. Adicionalmente para árvores
    binária existe um "senso de posição", ou seja,
    destingue-se entre uma subarvore esquerda e uma direita.
    Exemplo:

        a               a
       /                 \
      /                   \
     b                     b
        Arvores distintas.

    A terminologia basicamente utilizada em Árvore Binária
    é a mesma utilizada em árvores, exceto destinguir-se na
    quantidade de nodos.
    Uma árvore binária, cuja raiz armazena
    o Elemento R, é denominada Avoreve de Busca Binária
    se:
        . Todo Elemento armazenado na subárvore
        esquerda é menor que RAIZ;
        . Nenhum elemento armazenado na subárvore
        direita é menor que o RAIZ;
        . As subárvore esquerda e direita também
        são árvores de Busca Binária;

        Entrada de dados = { 3, 7, 9, 11, 1, 24, 69, 13, 28}

    Quanto as aplicações de Arvore Binária ou Arvore de indexação,
    são tecnicas adotadas em arquivos e tabelas de forma
    permitira recuperação de Registros em tempo
    real.
    As operações permitidas:
        - inserção;
        - consulta;
        - exibir;
*/

#include <stdio.h>
#include <stdlib.h>

#define TRUE            1
#define FALSE           0

typedef struct arvore{
    int codigo;
    struct arvore *next;
    struct arvore *back;
}arvore;

struct arvore *auxiliar, *raiz, *corrente;

void EnterData(){
    printf("Digite o codigo: ");
    scanf("%d", &corrente -> codigo);
}

void Inserir(){
    int aloca = FALSE;

    if(raiz == NULL){
        corrente = (arvore*)malloc(sizeof(arvore));
        corrente -> next = NULL;
        corrente -> back = NULL;
        EnterData();
        raiz = corrente;
    }else{
        auxiliar = raiz;
        corrente = (arvore*)malloc(sizeof(arvore));
        corrente -> next = NULL;
        corrente -> back = NULL;
        EnterData();
        while(aloca == FALSE){

            if(raiz -> codigo == corrente -> codigo){
                    printf("Elemento ja existente.\n");
                    aloca = TRUE;
                    system("pause");
            }else{
                if( corrente -> codigo < auxiliar -> codigo ){
                }
            }
        }
    }
}

void Exibir(){
}

void Consultar(){}

int main(){

    Inserir();
    Exibir();
    Consultar();

    return EXIT_SUCCESS;
}
