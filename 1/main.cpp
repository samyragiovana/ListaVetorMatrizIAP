#include <iostream>
using namespace std;
/*1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
(d) Mostre na tela cada valor do vetor A.*/
int main()
{   //bibioteca para o programa ler em português
    setlocale(LC_ALL, "Portuguese");

    //(a)Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    int a[]= {1,0,5,-2,-5,7};

    //(b)Armazene em uma variável inteira a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
    int soma;
    soma = a[0]+a[1]+a[5];
    cout << "A soma é:" << soma << endl;

    //(c)Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
    a[4]= 100;

    //(d)Mostre na tela cada valor do vetor A.
    cout << "O valor do vetor é:";
    for (int i=0; i<6;i++){
    cout << "[" << a[i] << "]";
    }

    cout << endl << endl;
    system("pause");
    return 0;
}
