#include <iostream>
using namespace std;

int opcion;

int main(){
    while(1==1){
        cout << "   * * * * Bienvenido al men� Principal * * * *" << endl;
        cout << "    Elija una de las siguientes opciones: "<<endl;
        cout <<"1- Mantenimiento de datos"<<endl;
        cout <<"2- Reportes respectivos"<<endl;
        cout <<"3- Salir"<<endl;
        cin >>opcion;

switch(opcion)
{
    case 1:
        cout<< "Selecion� el mantenimiento de datos"<<endl;
        break;
    case 2:
        cout<< "Seleccion� reportes respectivos"<<endl;
        break;
    case 3:
        exit(EXIT_SUCCESS);
        break;

}}
return 0;

}
