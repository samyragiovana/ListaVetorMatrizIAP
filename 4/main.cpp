#include <iostream>
using namespace std;
//4. Leia uma Matriz 4 x 4, imprima a matriz e retorne a localiza��o (linha e a coluna) do maior valor.
int main()
{   //bibioteca para o programa ler em portugu�s
    setlocale(LC_ALL, "Portuguese");

    //declara��o de variaveis
    float matriz[4][4];
    int x=0,y=0;

    //condi��o para o usu�rio digitar os n�meros na matriz
    cout << "Digite os valores da matriz" << endl;

    //condi��o para o programa ler os n�meros na matriz que o usu�rio digitou
    for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
        cout << "Linha " << (i + 1) << ", Coluna " << (j + 1) << ": ";
        cin >> matriz[i][j];
      }
    }

    //comando para limpar a tela
    system("cls");

    //Impress�o da matriz
    for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
        if(matriz[i][j] > matriz[x][y]){
            x = i;
            y = j;
        }
        cout << matriz[i][j] << " ";
      }
      cout << endl;
    }

    //mostrar o maior valor da matriz
    cout << "Maior valor da matriz est� na linha " << (x + 1) << " e coluna " << (y + 1) << endl;
    cout << "Valor:" << matriz[x][y] << endl;

    cout << endl << endl;
    system ("pause");
    return 0;
}
