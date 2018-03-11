#include<iostream>
#include<cstdlib>
#include<math.h>

using namespace std;

int main()
{
	float numero, respuesta;
	char opc;

	do
		{
	cout<<"introduzca numero: ";
	cin>>numero;
	
	if(numero<0)
	{
		cout<<"error"<<endl;
	}
	else
	{
		respuesta=sqrt(numero);
		cout<<"La raiz cuadrada de " <<numero<< " es: " <<respuesta<<endl;
	}
	
	system("pause");
	system("cls");
	
	cout<<"Precione A para continur y B para terminar."<<endl;
	cin>>opc;	
	}
		while ((opc=='a')||(opc=='A'));
	
	system("cls");
	system("pause");
	return 0;
}
