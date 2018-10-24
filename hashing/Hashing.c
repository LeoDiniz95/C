/**
        Hashing - Espalhamento

    Seja um conjunto P que contém
    todos os elementos de um determinado
    universo, possivelmente infinito
    chamamos de Espalhamento ( ou hashing)
    ao particionar o conjunto P em um
    numero finito de classes.

        Aplicabilidade

    Em termos práticos, a grande vantagem
    do espalhamento esta no fato de que dado um
    Elemento K de um conjunto P, o valor de hashing
    pode ser calculado em tempo constante, fornecendo
    imediatamente a classe da partição
    de P em que o elemento se encontra
    se considerarmos P uma coleção
    de elementos a ser Pesquisado, é fácil
    perceber que o processo será muito mas
    eficiente se a pesquisa for restrita a uma
    pequena parte do conjunto P( uma única
    classe).
    Exemplo:

            Conjunto

                P
      _________________            |
      |      Maria   |             |
    | Bento             |          v
   |  Ivete       Luiza  |      Modelo
    |     Marina        |      matematico
     |   Roberto      |            ^
    -----------------              |
    Conjunto Infinito              |

        Metodo de divisão inteira

    O metodo de divisão consiste
    basicamente em realizar uma
    DIVISÂO inteira e tomar o seu resto.
    Para compreende melhor este
    funcionamento vamos utilizar o exemplo
    abaixo:
            void hashing - inteiro
            {
                printf("Entre com codigo a ser
                        calculado...\n");
                scanf("%d", &chv);
                dh = (chv %n)+1;
            }
                dh = chv(54) = 5;
                dh = chv(15) = 1;
                dh = chv(33) = 4;
                dh = chv(9)  = 5;
                        .
                        .
                        .

        Transformação em chaves Alfanumericas

    O método da divisão não pode ser usado
    diretamente quando as chaves são
    alfanuméricas, neste caso, temos antes de
    transforma-las em valores numéricos
    que poderão ser divididos por N.
    Uma forma de se transformar uma chave
    alfanumerica num valor numerico
    consiste em considerar cada caractere
    da chave em um valor inteiro (codigo ASC II)
    e realizar a soma com todos eles:
        Exemplo:    gets(nome) = T O N I
                                 3 4 7 2    -> Soma = 16
    Exercicio

    Fazer 4 vetores e:
    - Entrar com o nome;
    - Calcular o valor deste nome;
    - Obter a classe que pertence.
*/


#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define N_CARACTERES        15
#define CLASSE              5


int pegador[CLASSE];
char nome[N_CARACTERES];
int i = 0;
int tamanhoVetor = 0;
int soma =0;
int dh = 0;

int vet1=0;
int vet3=0;
int vet2=0;
int vet4=0;

char vetor1[CLASSE][N_CARACTERES];
char vetor2[CLASSE][N_CARACTERES];
char vetor3[CLASSE][N_CARACTERES];
char vetor4[CLASSE][N_CARACTERES];

void classe1(int j, int total){
    printf("Classe 1\n");
    pegador[j] = total;

    for(i = 0; i < strlen(nome);i++)
        vetor1[vet1][i] = nome[i];
    vet1++;
}

void classe2(int j, int total){
    printf("Classe 2\n");
    pegador[j] = total;

    for(i = 0; i < strlen(nome);i++)
        vetor2[vet2][i] = nome[i];
    vet2++;
}

void classe3(int j, int total){
    printf("Classe 3\n");
    pegador[j] = total;

    for(i = 0; i < strlen(nome);i++)
        vetor3[vet3][i] = nome[i];
    vet3++;
}

void classe4(int j, int total){
    printf("Classe 4\n");
    pegador[j] = total;

    for(i = 0; i < strlen(nome);i++)
        vetor4[vet4][i] = nome[i];
    vet4++;
}

int main(){

    printf("Digite o nome: ");
    scanf("%s", &nome);

    tamanhoVetor = strlen(nome);

    for( i = 0; i < tamanhoVetor ;i++){
        soma = soma + nome[i];
        printf("Nome : %c      %d\n", nome[i], nome[i]);
        printf("Soma: %d\n\n", soma);
    }
    dh = (soma % 4) + 1;

    switch(dh){
        case 1:
            classe1(dh, soma);
            break;
        case 2:
            classe2(dh, soma);
            break;
        case 3:
            classe3(dh, soma);
            break;
        case 4:
            classe4(dh, soma);
            break;
    }

    return EXIT_SUCCESS;
}
