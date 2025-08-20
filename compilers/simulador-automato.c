#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int estados_finais[] = {1,2}, estado_inicial = 0, estados[] = {0,1,2};
  char alfabeto[10]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
  cadeia[] = {"1234"};
  int tabela_transicao[3][10] = {(1,2,2,2,2,2,2,2,2,2),
                              (NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL),
                              (2,2,2,2,2,2,2,2,2,2)};

  int estado_atual = estado_inicial, cabeca_indice;
  char cabeca = cadeia[0];


  for(int i=1; cabeca!='\0';i++) {
    for(int j=0;j<length(al:qfabetofabeto);i++) {
      if(cabeca == alfabeto[j]) {
        cabeca_indice = j;
        break;
      }
    }
    estado_atual = tabela_transicao[estado_atual][cabeca_indice];
    cabeca = cadeia[i];
  }

  if(estado_atual in estados_finais)
    printf("\nCadeia aceita!");
  else
    printf("\nCadeia não aceita");

  return 0;
}
