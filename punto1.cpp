#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main ()
{
int f,c; 
cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>f;

cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>c;   

int matrizA [f][c],i,j,igual=0,contador=0;
srand (time(NULL));
cout<<" Llene su mtariz indicada= " <<endl;

for ( i = 0; i < f; i++)
{
    for ( j = 0; j < c; j++)
    {
         matrizA[i][j] = rand() % 10+1;
    }
}
cout<< "impresion de la matriz= " <<endl;
for ( i = 0; i < f; i++)
{
    for ( j = 0; j < c; j++)
    {
        cout<< matrizA[i][j] << " ";
    }
    cout<<" "<<endl;
}

igual = matrizA [0][0];
 for ( i = 0; i < f; i++)
{
    for ( j = 0; j < c; j++)
    {
        if (igual == matrizA[i][j])
        {
            
            igual= matrizA[i][j];
            contador++;
            
        }
       
    }
}
    cout<<" El numero repetido es = " << igual<< endl;
    cout<<"El numero de veces que se repite es = " <<contador<<endl;

system ("PAUSE");
return 0;
}


 
