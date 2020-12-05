#include <iostream>
#include <string>

using namespace std;

struct Alumno 
{
    string nombre;
    string doc;
    string edad;
    string sem;

}
;

int main()
{
struct Alumno e;

cout << "Ingrese su nombre completo "<<endl;
 cin >> e.nombre;
cout << "Ingrese su edad "<<endl;
 cin >> e.edad;
 cout << "Ingrese el semestre academico cursado actualmente "<<endl;
 cin >> e.sem;
cout << "Ingrese su documento de identidad "<<endl;
 cin >> e.doc;


    
 cout << "El nombre ingresado es= " << e.nombre << endl;
 cout << "La edad ingresada es= " << e.edad << endl;
 cout << "El documento registrado es= " << e.doc << endl;
 cout << "El semestre academico actual es= " << e.sem << endl;



}