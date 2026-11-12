#include <iostream>

using namespace std;

int funcionMenu(int seleccionarOpcion)
{
    switch (seleccionarOpcion)
    {
    case 1:
        cout << "Usted ha escogido una hamburguesa" << endl;
        break;
    case 2:
        cout << "Usted ha escogido un hot-dog" << endl;
        break;
    case 3:
        cout << "Usted ha escogido papas fritas" << endl;
        break;
    }

    return seleccionarOpcion;
}

int main()
{

    int opcion;
    int opcionMenu;
    int comidaSeleccionada;

    do
    {
        cout << "\nMENU PARA SISTEMA DE CAFETERIA" << endl;
        cout << "-Escoga una opcion-" << endl;
        cout << "1. Ver el menu." << endl;
        cout << "2. Ingresar compras del dia" << endl;
        cout << "3. Seleccionar menu" << endl;
        cout << "4. Salir del menu" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "En nuestro menu contamos con: " << endl;
            cout << "1. Hamburguesa" << endl;
            cout << "2. Hot-Dog" << endl;
            cout << "3. Papas Fritas" << endl;
            cout << "Si quiere comprar escoja otro menu" << endl;
            break;
        case 2:
            cout << "Falta agregar esta feature" << endl;
            break;
        case 3:
            cout << "Seleccione la opcion de alimento que desee comprar" << endl;
            cin >> opcionMenu;
            comidaSeleccionada = funcionMenu(opcionMenu);
            cout << comidaSeleccionada;
            break;
        case 4:
            cout << "Saliendo del menu..." << endl;
            break;
        default:
            cout << "Ingrse una opcion valida" << endl;
            break;
        }
    } while (opcion != 4);

    return 0;
}