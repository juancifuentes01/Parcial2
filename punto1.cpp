#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int f,c,x=0,z=0,w=0; 
    
    cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
        cin>>f;

    cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
        cin>>c;   

    int matrizA [f][c],matrizB[f][c],i,j,igual=0,contador=0;
    cout<<endl;

    for ( i = 0; i < f; i++)
    {
        for ( j = 0; j < c; j++)
       {
            matrizA[i][j] = rand() % 10+1;
            matrizB[i][j]=matrizA[i][j];
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
    cout<<endl;

    
    for ( i = 0; i < f; i++)
    {
        for ( j = 0; j < c; j++)
        {
            for(int h=0; h<f; h++)
            {
                for(int k=0; k<f; k++)
                {
                    if(matrizB[i][j]==matrizA[h][k])
                    {
                        x++;

                    }
                }
            }
            if (x>z)
           {    
               z=x;
               w=matrizB[i][j];

            }
            x=0;
            
        }
    }
    cout<<" El numero repetido es = " <<w<< endl;
    cout<<"El numero de veces que se repite es = " <<z<<endl;

    system ("PAUSE");
    return 0;
}
