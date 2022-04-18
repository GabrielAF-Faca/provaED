#include <iostream>
#include <ctime>
#include <time.h>
#include <locale>
#include "lista.h"

using namespace std;

/*
OBJETIVOS
1) No método inserir de lista simples e encadeada, altere o método para que um mesmo valor não seja inserido mais de uma vez. FEITO

2) No método excluirOcorrencias (trabalhado na última aula), faça alteração para que ele, além de excluir as ocorrências de um número passado como parâmetro, 
imprima na tela quantos números foram excluídos. FEITO

3) Faça um método que receba 2 listas simples e encadeadas (com números inteiros) e exiba (imprima) os números que aparecem nas 2 listas. FEITO

4) Faça um método que receba 2 listas simples e encadeadas (com números inteiros). 
O método deve unir a primeira lista com a segunda lista e retornar a nova lista gerada. FEITO
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