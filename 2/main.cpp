#include <iostream>
using namespace std;
/*2. Elabore um programa que leia um conjunto de 5 n�meros reais, armazenando-os em um vetor A.
Em seguida, calcule o quadrado dos componentes deste vetor, e armazene o resultado em um vetor B. Imprima os dois vetores.
int main()*/

int main()
{   //bibioteca para o programa ler em portugu�s
    setlocale(LC_ALL, "Portuguese");

    //declara��o de vari�veis
    float x[5];
    float y[5];

    //condi��o para o usu�rio inserir os valores do vetor
    for(int i = 0; i < 5; i++){
        cout << "Insira um valor: ";
        cin >> x[i];
        y[i] = x[i] * x[i];
    }

    //comando para limpar a tela
    system ("cls");

    //imprimindo o vetor na tela
    cout << "Vetor x: ";
    for(int i = 0; i < 5; i++){
        cout << "[" << x[i] << "]" ;
    }


    cout << endl;
    system("pause");
    return 0;
}
