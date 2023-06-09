#include <iostream>
using namespace std;
/*10. Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números inteiros.
Em seguida, gere um array unidimensional pela soma dos números de cada coluna da matriz e mostre na tela esse array.*/

int main()
{   //biblioteca de português
    setlocale(LC_ALL, "Portuguese");

    //declaração de variáveis
    float m[3][3];
    int v[3];
    int soma_j0 = 0,soma_j1 = 0,soma_j2 = 0;

    //condição para o usuário digitar os números na matriz
    cout << "Digite os valores da matriz " << endl;

     //condição para o programa ler os números na matriz que o usuário digitou
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << "Linha " << (i + 1) << ", Coluna " << (j + 1) << ": ";
        cin >> m[i][j];
      }
    }

    //comando para limpar a tela
    system("cls");

    //Impressão da matriz e formação do vetor
    for(int i=0;i<3;i++){
    cout << "[";
    for(int j=0;j<3;j++){
        cout << m[i][j] << " ";
      }
      cout << "]" << endl;
    }

    //formação do vetor
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(j==0){
          soma_j0 += m[i][j];
          v[j]=soma_j0;
        }
        if(j==1){
           soma_j1 += m[i][j];
           v[j] = soma_j1;
        }
        if(j==2){
           soma_j2 += m[i][j];
           v[j] =soma_j2;
        }
      }
    }

    cout << endl;

    //Impressão do vetor
    cout << "Vetor das Somas das Colunas da Matriz " << endl;

    for(int i=0;i<3;i++){
        cout << v[i] << " " ;
    }

    cout << endl << endl;
    system ("pause");
    return 0;
}
