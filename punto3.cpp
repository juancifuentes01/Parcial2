#include<iostream>
#include<math.h>

using namespace std;

int fac(int x)
{
    if(x<2)
    return 1;
    else
    return x * fac(x-1);
}
int ecuacion(int x, int k)
{
    if(k==1)
    return x;
    else
    {
    if(x==k)
    return 1;
    else
    return fac(x) / (fac(k) * fac(x - k));
    }
}

int main()
{
    int f=0,n=0,m=0,suma=0,total;
    cout<<"Numero de filas "<<endl;
    cin>>f;

    for(int i=0; i<=f; i++)
    {
        for(int j=0; j<=i; j++)
           
      cout << ecuacion(i, j) << "  ";
      cout<<endl;
    }

    
    cout<<"Ingrese la fila donde empieze la suma"<<endl;
    cin>>n;
    cout<<"Ingrese la fila donde finaliza la suma"<<endl;
    cin>>m;

    for(int i=n; i<=m; i++)
    {
        for(int j=0; j<=i; j++)
        suma=suma+ecuacion(i,j);
    }
    
    cout <<"la suma es "<< suma << "  ";
    return 0;
}