#include <iostream>
using namespace std;
/*1. Fa�a um programa que possua um vetor denominado A que armazene 6 n�meros inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma vari�vel inteira (simples) a soma entre os valores das posi��es A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posi��o 4, atribuindo a esta posi��o o valor 100.
(d) Mostre na tela cada valor do vetor A.*/
int main()
{   //bibioteca para o programa ler em portugu�s
    setlocale(LC_ALL, "Portuguese");

    //(a)Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    int a[]= {1,0,5,-2,-5,7};

    //(b)Armazene em uma vari�vel inteira a soma entre os valores das posi��es A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
    int soma;
    soma = a[0]+a[1]+a[5];
    cout << "A soma �:" << soma << endl;

    //(c)Modifique o vetor na posi��o 4, atribuindo a esta posi��o o valor 100.
    a[4]= 100;

    //(d)Mostre na tela cada valor do vetor A.
    cout << "O valor do vetor �:";
    for (int i=0; i<6;i++){
    cout << "[" << a[i] << "]";
    }

    cout << endl << endl;
    system("pause");
    return 0;
}
