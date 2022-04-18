#include <iostream>
#include <ctime>
#include <time.h>
#include <locale>
#include "lista.h"

using namespace std;

/*
OBJETIVOS
1) No m�todo inserir de lista simples e encadeada, altere o m�todo para que um mesmo valor n�o seja inserido mais de uma vez. FEITO

2) No m�todo excluirOcorrencias (trabalhado na �ltima aula), fa�a altera��o para que ele, al�m de excluir as ocorr�ncias de um n�mero passado como par�metro, 
imprima na tela quantos n�meros foram exclu�dos. FEITO

3) Fa�a um m�todo que receba 2 listas simples e encadeadas (com n�meros inteiros) e exiba (imprima) os n�meros que aparecem nas 2 listas. FEITO

4) Fa�a um m�todo que receba 2 listas simples e encadeadas (com n�meros inteiros). 
O m�todo deve unir a primeira lista com a segunda lista e retornar a nova lista gerada. FEITO
*/

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    Celula *lista = NULL, *lista1 = NULL, *lista2 = NULL;

    srand(time(NULL));
    lista1 = lista_popular(25, lista1);
    lista_exibir(lista1);
    

    
    lista2 = lista_popular(15, lista2);

    lista_exibir(lista2);


    lista_interseccao_numeros(lista1, lista2);

    return 1;
}