#include <iostream>

using namespace std;

int main()
{
    //Declarar variables 
   float n1,n2,n3, prom;
   //solucion
   
   //1.Leer datos
   cout<<"Dame un numero:  ";
   cin>>n1;
   cout << "Dame otro numero:  ";
   cin>>n2;
   cout << "Dame uno mas numero:  ";
   cin>>n3;
   prom=(n1+n2+n3)/3;
   cout<< "El promedio es:  "<<prom;
    return 0;
}
