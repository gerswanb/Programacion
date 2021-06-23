#include<iostream>
using namespace std;
int main()
{
int c;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];


cout<<"OPERACIONES CON MATRICES:\n\n";
cout<<"digite la  OPERACION a REALIZAR? \n\n\n";
cout<<"1. Suma \n";
cout<<"2. Resta \n";
cout<<"3. Multiplicacion \n";
cout<<"4. Division \n";
cout<<"\n";

//SUMA DE LAS MATRICES// GERALD SWANSON
if(c==1)

{
	cout<<"USTED A ESCOGIDO LA SUMA\n\n";
	cout<<"EL RESULTADO ES:\n\n";
	for (int i=0;i<10;i++)
{
	suma[i]=matriz1[i]+matriz2[i];
	cout<<suma[i]<<"\n";
}
}



return 0;

}
