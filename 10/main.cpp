#include <iostream>
using namespace std;
/*10. Fa�a um programa que permita ao usu�rio entrar com uma matriz de 3 x 3 n�meros inteiros.
Em seguida, gere um array unidimensional pela soma dos n�meros de cada coluna da matriz e mostre na tela esse array.*/

int main()
{   //biblioteca de portugu�s
    setlocale(LC_ALL, "Portuguese");

    //declara��o de vari�veis
    float m[3][3];
    int v[3];
    int soma_j0 = 0,soma_j1 = 0,soma_j2 = 0;

    //condi��o para o usu�rio digitar os n�meros na matriz
    cout << "Digite os valores da matriz " << endl;

     //condi��o para o programa ler os n�meros na matriz que o usu�rio digitou
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << "Linha " << (i + 1) << ", Coluna " << (j + 1) << ": ";
        cin >> m[i][j];
      }
    }

    //comando para limpar a tela
    system("cls");

    //Impress�o da matriz e forma��o do vetor
    for(int i=0;i<3;i++){
    cout << "[";
    for(int j=0;j<3;j++){
        cout << m[i][j] << " ";
      }
      cout << "]" << endl;
    }

    //forma��o do vetor
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

    //Impress�o do vetor
    cout << "Vetor das Somas das Colunas da Matriz " << endl;

    for(int i=0;i<3;i++){
        cout << v[i] << " " ;
    }

    cout << endl << endl;
    system ("pause");
    return 0;
}
