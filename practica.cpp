#include <iostream>

using namespace std;

int main()
{

    int opcion;

    do
    {
        cout << "\nMENU PARA SISTEMA DE CAFETERIA" << endl;
        cout << "-Escoga una opcion-" << endl;
        cout << "1. Ver el menu." << endl;
        cout << "2. Ingresar compras del dia" << endl;
        cout << "3. Salir del menu" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Falta agregar esta opcion" << endl;
            break;
        case 2:
            cout << "Falta agregar esta feature" << endl;
            break;
        case 3:
            cout << "Saliendo del menu..." << endl;
            break;
        default:
            cout << "Ingrse una opcion valida" << endl;
            break;
        }
    } while (opcion != 3);

    return 0;
}