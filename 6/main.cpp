#include <iostream>
using namespace std;
//6. Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.

int main()
{   //bibioteca para o programa ler em português
    setlocale(LC_ALL, "Portuguese");

    //declaração de variaveis
    float m[3][3];
    int soma=0;

    //condição para o usuário digitar os números na matriz
    cout << "Digite os valores da matriz" << endl;

    //condição para o programa ler os números na matriz que o usuário digitou
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << "Linha " << (i + 1) << ", Coluna " << (j + 1) << ": ";
        cin >> m[i][j];
        if(i<j){
            soma+= m[i][j];
        }
      }
    }

    //comando para limpar a tela
    system("cls");

    //Impressão da matriz
    for(int i = 0; i < 3; i++){
    cout << "[";
    for(int j = 0; j < 3; j++){
        cout << m[i][j] << " ";
      }
       cout << "]" << endl;
    }

    //mostrar a soma acima da diagonal da matriz
    cout << "\nSoma acima da diagonal principal é " << soma << endl;

    cout << endl << endl;
    system("pause");
    return 0;
}
