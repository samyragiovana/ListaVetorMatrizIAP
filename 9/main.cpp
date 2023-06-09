#include <iostream>
using namespace std;
//9. Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.

int main()
{   //bibioteca para o programa ler em português
    setlocale(LC_ALL, "Portuguese");

    //declaração de variaveis
    float m[3][3];

    //condição para o usuário digitar os números na matriz
    cout << "Digite os valores da matriz" << endl;

    //condição para o programa ler os números na matriz que o usuário digitou
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << "Linha " << (i + 1) << ", Coluna " << (j + 1) << ": ";
        cin >> m[i][j];
      }
    }

    //comando para limpar a tela
    system("cls");

    //Impressão da matriz normal
    cout << "Matriz Normal" << endl;
    for(int i = 0; i < 3; i++){
    cout << "[";
    for(int j = 0; j < 3; j++){
        cout << m[i][j] << " ";
      }
       cout << "]" << endl;
    }

    cout << endl;

    //Impressão da matriz transposta
    cout << "Matriz Transposta" << endl;
    for(int i = 0; i < 3; i++){
    cout << "[";
    for(int j = 0; j < 3; j++){
        cout << m[j][i] << " ";
      }
       cout << "]" << endl;
    }


    cout << endl << endl;
    system("pause");
    return 0;
}

