/*programa que convierta dólares a euros
usar bucle do-while para realizar
conversiones repetidamente*/
/*NABerganzaEspinoza*/
#include <iostream>
using namespace std;
int main()
{
    float dolar = 0, euro = 0;
    cout << "Ingrese una cantidad en dolares para convertir a euros\n";
    do
    {
        cout << "ingrese 0 para salir\n";
        cin >> dolar;
        if (dolar > 0)
        {
            euro = dolar * 0.92;
            cout << "La cantidad de dolares en euros seria: " << euro << endl
                 << endl;
        }
        else
        {
            cout << "Saliendo...";
        }

    } while (dolar != 0 /*ingresar 0 para salir*/);

    return 0;
}