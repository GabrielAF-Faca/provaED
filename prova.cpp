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

    //OBJETIVO 1 - DEMONSTRA��O
    
    //criando lista aleat�ria
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

    //OBJETIVO 2 - DEMONSTRA��O
    cout << "Excluindo todas as ocorr�ncias de 5 e 6 da lista" << endl;
    lista = lista_excluir_ocorrencias(5, lista);
    lista = lista_excluir_ocorrencias(6, lista);

    //OBJETICO 3 - DEMONSTRA��O
    cout << "Lista 1:" << endl;
    lista1 = lista_popular(15, lista1);
    lista_exibir(lista1);

    cout << endl;

    cout << "Lista 2:" << endl;
    lista2 = lista_popular(25, lista2);
    lista_exibir(lista2);

    cout << endl << endl;

    lista_interseccao_numeros(lista1, lista2);

    //OBJETICO 4 - DEMONSTRA��O
    cout << endl << endl << "N�mero de elementos na lista 1: " << lista_contar(lista1) << endl;
    cout <<  "N�mero de elementos na lista 2: " << lista_contar(lista2);

    lista = NULL;
    cout << endl << endl;

    cout << "Uni�o da lista 1 com a lista 2:"<<endl;
    lista = lista_unir(lista1, lista2, lista);
    lista_exibir(lista);
    cout << endl << endl << "N�mero de elementos da lista resultante: " << lista_contar(lista);
    return 1;
}