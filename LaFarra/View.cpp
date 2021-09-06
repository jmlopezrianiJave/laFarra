#include "View.h"

View::View()
{
}

void View::mostrarMenuReportes()
{
    int opcion = -1, cantMinima;
    do
    {

        cout << "Reportes\n";
        cout << "Menu Tienda\n";
        cout << "1. Productos escasos \n";
        cout << "2. Cantidad snacks y licores vendidos \n";
        cout << "3. Ganancias obtenidas \n";
        cout << "4. Productos \n";
        cout << "5. Valor de Iva a pagar \n";
        cout << "0. Volver \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        // TODO completar
        switch (opcion)
        {
            case 1:
                cout<<"Ingrese la cantidad minima de productos para reportar: \n";
                cin>>cantMinima;
                laFarra.productosEscasos(cantMinima);
            break;
            case 2:
                laFarra.productosVendidosTipo();
            break;
            case 3:
            break;
            case 4:
                laFarra.productosEnTienda();
            break;
            case 5:
                cout<<"Valor a pagar por IVA a la DIAN: "<<laFarra.IVAaDIAN()<<"\n\n";
            break;
        }

    } while (opcion != 0);
}

void View::mostrarMenu()
{
    int opcion = -1;
    do
    {

        cout << "Menu Tienda\n";
        cout << "1. Agregar Productos \n";
        cout << "2. Mostrar Productos \n";
        cout << "3. Vender \n";
        cout << "4. Mostrar Ventas \n";
        cout << "5. Reportes \n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {

        case 1:
            laFarra.agregarProducto();
            break;
        case 2:
            laFarra.mostrarProductos();
            break;

        case 3:
            laFarra.vender();
            break;

        case 4:
            laFarra.mostrarFacturas();
            break;

        case 5:
            mostrarMenuReportes();
            break;
        }

    } while (opcion != 0);
}