/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

NOME COGNOME DATA
Daniele Nencioni 3/3/2022
*/

# include <iostream>
using namespace std;
int main()
{
  int i=0 ,n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  while(i < n)
  {
   cout<<"Bada come la fuma"<<endl; 
  }
  system("pause");
}
