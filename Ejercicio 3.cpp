#include <iostream>
using namespace std;
int main () {

int numero, multiplicador = 0, resultado;


cout << "Ingrese un numero: \n" ;
cin >> numero;

cout << "La tabla del " << numero << " es: \n";
while (multiplicador <= 10)
{

resultado= numero * multiplicador;


  cout << numero << " x " << multiplicador << " es igual a: " << resultado << endl;
multiplicador++;
}





    return 0;
}
// Hecho por : Rogelio Benitez y Miguel Escobar