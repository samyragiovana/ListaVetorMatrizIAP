#include <iostream>
using namespace std;
/*3. Declare uma Matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos.
Escreva ao final a matriz obtida.*/

int main()
{   //bibioteca para o programa ler em português
    setlocale(LC_ALL, "Portuguese");

    //declaração do numero de colunas e linhas que a matriz irá ter
    int a[5][5];

    //condições para a criação da matriz
    for(int b=0;b<5;b++){
    for(int c=0;c<5;c++){
        (b==c)? a[b][c]=1 : a[b][c]=0;
        }
    }

    //imprimindo a matriz
    for(int b=0;b<5;b++){
    cout << "[";
    for(int c=0;c<5;c++){
    cout << a[b][c];
    }
    cout << "]" << endl;
    }

    cout << endl << endl;
    system("pause");
    return 0;
}
