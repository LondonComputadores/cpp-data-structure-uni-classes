#include <iostream>
using namespace std;
void menu()
{
  system("cls");
  cout<<"\nMenu\n";
  cout<<"\n1-Pilha";
  cout<<"\n2-Fila";
  cout<<"\n3-Lista";
  cout<<"\n4-Arvore";
  cout<<"\n5-Grafo";
  cout<<"\n6-Sair";
  cout<<"\nOpcao: ";
}
int main()
{ int op;
do
{ menu(); //chamada da funcao
  cin>>op;
  switch(op)
  {
    case 1: cout<<"\nMetodo de Acesso: LIFO\n";
             break;
    case 2: cout<<"\nMetodo de Acesso: FIFO\n";
             break;
    case 3: cout<<"\nVamos Estudar Lista\n";
             break;
    case 4: cout<<"\nNao Vamos Estudar Arvore\n";
             break;
    case 5: cout<<"\nNão Vamos Estudar Grafos\n";
             break;
    case 6: cout<<"\nObrigado Por Acessar\n";
             break;
    default: cout<<"\nOpcaoInvalida\n";
  }
  system ("pause");
 }while(op != 6);
return 0;
}    