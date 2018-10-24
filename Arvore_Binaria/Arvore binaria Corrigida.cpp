#include<stdlib.h>
#include<stdio.h>
#include<string.h>
// Arvore Binária // Prof. Toni
typedef struct no{
       int id;
       struct no *next;
       struct no *back;
} no;
struct no *auxiliar;
struct no *aux2;
struct no *raiz;

void enterdata(){
     printf("\nInsert the id:");
     scanf("%i",&auxiliar->id);
}

void inserir(){
     int aloca = 0;
     if(raiz == NULL)
     {
             auxiliar = (no*)malloc(sizeof(no));
             auxiliar->next = NULL;
             auxiliar->back = NULL;
             enterdata();
             raiz = auxiliar;
     }
     else
     {
         aux2 = raiz;
         auxiliar = (no*)malloc(sizeof(no));
         auxiliar->next = NULL;
         auxiliar->back = NULL;
         enterdata();
         while(aloca == 0)
         {
            if(raiz->id==auxiliar->id){
                printf("\nDigita certo ae\n");
                aloca = 1;
            }else{
                    if(raiz->id < auxiliar->id)
                    {
                        if(aux2->next == NULL)
                        {
                            aux2->next = auxiliar;
                            printf("\nelemento foi alocado a direita\n\n");
                            aloca=1;
                        }
                        else
                        {
                            aux2=aux2->next;
                        }
                    }
                    if(raiz->id > auxiliar->id)
                    {
                        if(aux2->back==NULL)
                        {
                            aux2->back = auxiliar;
                            printf("\nelemento foi alocado a esquerda\n\n");
                            aloca = 1;
                        }
                        else
                        {
                            aux2 = aux2->back;
                        }
                    }
                }
            }
     }
}

void exibir()
{
         if(raiz==NULL)
          {
           printf("Arvore Vazia\n\n");
           system("pause");
          }
          else
           {
           auxiliar=raiz;
           printf("\nid =%i", auxiliar->id);
           if(auxiliar->next!=NULL){
                while(auxiliar!=NULL){
                                      if(auxiliar!=raiz){
                                      printf("\nid =%i", auxiliar->id);
                                      }
                                      auxiliar=auxiliar->next;
                }
            }
           auxiliar=raiz;
           if(auxiliar->back!=NULL){
                while(auxiliar!=NULL){
                                      if(auxiliar!=raiz){
                                      printf("\nid =%i", auxiliar->id);
                                      }
                                      auxiliar=auxiliar->back;
                }
           }
                printf("\n\n");
                system("pause");
}
}
void pesquisar()
{
     int achou=0, num;
     printf("Digita ae :");
     scanf("%d", &num);
         if(raiz==NULL)
          {
           printf("Arvore Vazia\n\n");
           system("pause");
          }
          else
           {
           auxiliar=raiz;
           if(auxiliar->next!=NULL){
                while(auxiliar!=NULL){
                                    if(num==auxiliar->id){
                                                          achou=1;
                                    }
                                      auxiliar=auxiliar->next;

                }
            }
           auxiliar=raiz;
           if(auxiliar->back!=NULL){
                while(auxiliar!=NULL){
                                      if(num==auxiliar->id){
                                                          achou=1;
                                    }
                                      auxiliar=auxiliar->back;
                }
           }
           if(achou==1){
                        printf("\nId cadastrado\n");
           }else{
                 printf("\nId nao cadastrado\n");
           }
           system("pause");
}
}


int main(){
    char resp;
    int op;
    do{
    system("cls");
    printf("1 - Inserir");
    printf("\n2 - Exibir");
    printf("\n3 - Pesquisar");
    printf("\n4 - Sair");
    printf("\nDigite sua opcao: ");
    scanf("%i", &op);
    switch(op){
              case 1:
                   do{
                   inserir();
                   printf("Quer continuar? ");
                   scanf("%s", &resp);
                   }while(resp=='s');
              break;
              case 2:
                   exibir();
              break;
              case 3:
                   pesquisar();
              break;
              case 4:
              break;
    }}while(op!=4);
    system("pause");
    return 0;
}
