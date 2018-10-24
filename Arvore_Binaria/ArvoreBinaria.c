/**
        Arvore Binaria

    Uma �rvore Bin�ria � uma �rvore
    que pode ser nula, ou ent�o, tem as
    seguintes caracter�sticas:
        . Existe um nodo especial denominado RAIZ;
        . Os demais nodos s�o particionados em T1, T2
        estruturas dejuntas de �rvores Bin�rias;
        . T1 � denominado sub�rvore esquerda e
        T2 sub�rvore a direita;
    �rvore Bin�ria � um caso especial
    de �rvores em que nenhum nodo tem
    grau superior a 2, isto �, nenhum nodo tem
    mais que dois filhos. Adicionalmente para �rvores
    bin�ria existe um "senso de posi��o", ou seja,
    destingue-se entre uma subarvore esquerda e uma direita.
    Exemplo:

        a               a
       /                 \
      /                   \
     b                     b
        Arvores distintas.

    A terminologia basicamente utilizada em �rvore Bin�ria
    � a mesma utilizada em �rvores, exceto destinguir-se na
    quantidade de nodos.
    Uma �rvore bin�ria, cuja raiz armazena
    o Elemento R, � denominada Avoreve de Busca Bin�ria
    se:
        . Todo Elemento armazenado na sub�rvore
        esquerda � menor que RAIZ;
        . Nenhum elemento armazenado na sub�rvore
        direita � menor que o RAIZ;
        . As sub�rvore esquerda e direita tamb�m
        s�o �rvores de Busca Bin�ria;

        Entrada de dados = { 3, 7, 9, 11, 1, 24, 69, 13, 28}

    Quanto as aplica��es de Arvore Bin�ria ou Arvore de indexa��o,
    s�o tecnicas adotadas em arquivos e tabelas de forma
    permitira recupera��o de Registros em tempo
    real.
    As opera��es permitidas:
        - inser��o;
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
