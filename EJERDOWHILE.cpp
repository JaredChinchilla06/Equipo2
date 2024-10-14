#include <iostream>
using namespace std;

int main(){
    int numeroSecretoo = 78;
    int intento;
    int intentos = 0;

    cout << "Adivina el numero secreto! \n";

    do
    {
        //Hecho por Kevin Lopez
        cout << "Cual crees que es? ";
        cin >> intento;
        intentos++;

        //Hecho por Juan Flores
        if (intento > numeroSecretoo)
        {
            cout << "El numero que ingresaste es un poco mas grande \n";
        } else if (intento < numeroSecretoo)
        {
            cout << "El numero que ingresaste es mas pequenyo \n";
        } 
        
    } while (intento != numeroSecretoo);

    cout << "Felicidades! encontraste el numero secreto y solamente te tomo: " << intentos << " en total!" << endl;

    return 0;
}