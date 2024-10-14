#include <iostream>
using namespace std;

int main(){
    int numeroSecreto = 78;
    int intento;
    int intentos = 0;

    cout << "Adivina el numero secreto! \n";

    do
    {
        cout << "Cual crees que es? ";
        cin >> intento;
        intentos++;

        if (intento > numeroSecreto)
        {
            cout << "El numero que ingresaste es un poco mas grande \n";
        } else if (intento < numeroSecreto)
        {
            cout << "El numero que ingresaste es mas pequenyo \n";
        } 
        
    } while (intento != numeroSecreto);

    cout << "Felicidades! encontraste el numero secreto y solamente te tomo: " << intentos << " en total!" << endl;

    return 0;
}