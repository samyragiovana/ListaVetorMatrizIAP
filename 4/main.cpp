#include <iostream>
using namespace std;
//4. Leia uma Matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.
int main()
{   //bibioteca para o programa ler em português
    setlocale(LC_ALL, "Portuguese");

    //declaração de variaveis
    float matriz[4][4];
    int x=0,y=0;

    //condição para o usuário digitar os números na matriz
    cout << "Digite os valores da matriz" << endl;

    //condição para o programa ler os números na matriz que o usuário digitou
    for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
        cout << "Linha " << (i + 1) << ", Coluna " << (j + 1) << ": ";
        cin >> matriz[i][j];
      }
    }

    //comando para limpar a tela
    system("cls");

    //Impressão da matriz
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
    cout << "Maior valor da matriz está na linha " << (x + 1) << " e coluna " << (y + 1) << endl;
    cout << "Valor:" << matriz[x][y] << endl;

    cout << endl << endl;
    system ("pause");
    return 0;
}
