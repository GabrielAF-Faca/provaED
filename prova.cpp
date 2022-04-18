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

    //OBJETIVO 1 - DEMONSTRAÇÃO
    
    //criando lista aleatória
    lista = lista_popular(15, lista);

    //excluindo 5 e 6 da lista para o exemplo
    lista = lista_excluir_ocorrencias(5, lista);
    lista = lista_excluir_ocorrencias(6, lista);

    system("cls");

    cout << endl << "Lista original" << endl;
    lista_exibir(lista);

    cout << endl << endl;

    cout << "Adicionando 5 pela primeira vez" << endl;
    lista = lista_inserir(5, lista);
    lista_exibir(lista);
    
    cout << endl << endl;

    cout << "Adicionando 5 pela segunda vez" << endl;
    lista = lista_inserir(5, lista);
    lista_exibir(lista);

    cout << endl << endl;

    cout << "Adicionando 6 pela primeira vez" << endl;
    lista = lista_inserir(6, lista);
    lista_exibir(lista);

    cout << endl << endl;

    cout << "Adicionando 6 pela segunda vez" << endl;
    lista = lista_inserir(6, lista);
    lista_exibir(lista);

    cout << endl << endl;

    //OBJETIVO 2 - DEMONSTRAÇÃO
    cout << "Excluindo todas as ocorrências de 5 e 6 da lista" << endl;
    lista = lista_excluir_ocorrencias(5, lista);
    lista = lista_excluir_ocorrencias(6, lista);

    //OBJETICO 3 - DEMONSTRAÇÃO
    cout << "Lista 1:" << endl;
    lista1 = lista_popular(15, lista1);
    lista_exibir(lista1);

    cout << endl;

    cout << "Lista 2:" << endl;
    lista2 = lista_popular(25, lista2);
    lista_exibir(lista2);

    cout << endl << endl;

    lista_interseccao_numeros(lista1, lista2);

    //OBJETICO 4 - DEMONSTRAÇÃO
    cout << endl << endl << "Número de elementos na lista 1: " << lista_contar(lista1) << endl;
    cout <<  "Número de elementos na lista 2: " << lista_contar(lista2);

    lista = NULL;
    cout << endl << endl;

    cout << "União da lista 1 com a lista 2:"<<endl;
    lista = lista_unir(lista1, lista2, lista);
    lista_exibir(lista);
    cout << endl << endl << "Número de elementos da lista resultante: " << lista_contar(lista);
    return 1;
}