#include <iostream>

using namespace std;



int main()
{
	int n;
	int contador=0;
	
	cout<<"\n\t |Ingresa el valor de n: ";
	cin>>n;
	
	
	
	for (int i=0 ; i<=n ; i++)
	{
		contador=contador+2; //Cuenta las veces que pasa por el for y por el if
		if (i%2==0){
			contador=contador+1; //Cuanta las veces que hace la instruccion dentro del if
			cout<<" i: "<<i<<" ";
		}
	}
	
	cout<<"\n\t |Contador primera funcion: "<<contador;
	
	for (int i=0 ; i<=n ; i++)
	{
		contador=contador+2; //Cuenta las veces que pasa por el for y por el if
		if (i%2!=0){
			contador=contador+1; //Cuanta las veces que hace la instruccion dentro del if
			cout<<" i: "<<i<<" ";
		}
	}
	
	
	cout<<"Contador: "<<contador;
	
	
	
return 0;
}
