#include <iostream>
using namespace std;

int main()
{
    do{
        int a,b;
        cout << "   * * * * Bienvenido al menú Principal * * * *" << endl;
        cout << "    Elija una de las siguientes opciones: "<<endl;
        cout <<"1- Mantenimiento de datos"<<endl;
        cout <<"2- Reportes respectivos"<<endl;
        cout <<"3- Salir"<<endl;
        cin >>a;

        switch(a)
        {
            case 1:
                cout<< "Selecionó el mantenimiento de datos";
                break;
            case 2:
                cout<< "Seleccionó reportes respectivos";
                break;
            case 3:
                cout<< "¿Seguro que queires salir? SI---NO";
                cout <<"1- SI"<<endl;
                cout <<"2- NO"<<endl;
                cin >>b;
                if(b=1)
                {
                    return 0;
                }
                else
                {
                    return main();
                }
                break;
        }
    }
    while(a != 3);
    system("pause");

}
