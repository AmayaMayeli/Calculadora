#include <iostream>
using namespace std;
int  main ()
{
    int n = 0;
    do{
        int variable1, variable2, OpcionMenu,numero1,numero2,resultado;
        cout << " Ingrese el numero que corresponda segun la operacion deseada: " << endl;
        cout << " 1. Suma " << endl;
        cout << " 2. Resta " << endl;
        cout << " 3. Multiplicacion " << endl;
        cout << " 4. División " << endl;
        cin >> OpcionMenu;
        if (OpcionMenu == 1 )
        {
        cout << "ingrese el primer numero" << endl;
        cin >> numero1;
        cout << "ingrese el segundo numero" << endl;
        cin >> numero2;
        resultado = numero1 + numero2;
        cout << "La suma es igual a: "<< resultado << endl;
        n=1;
        }
        else if (OpcionMenu == 2 )
        {
        cout << "ingrese el primer numero" << endl;
        cin >> numero1;
        cout << "ingrese el segundo numero" << endl;
        cin >> numero2;
        resultado = numero1 - numero2;
        cout<< "La diferencia es igual a: "  << resultado << endl;
        n=1;
        }
        else if (OpcionMenu == 3 )
        {
        cout << "ingrese el primer numero" << endl;
        cin >> numero1;
        cout << "ingrese el segundo numero" << endl;
        cin >> numero2;
        resultado = numero1 * numero2;
        cout<< "Producto es igual a: "  << resultado << endl;
        n=1;
        }
        else if (OpcionMenu == 4 )
        {
        cout << "ingrese el primer numero" << endl;
        cin >> numero1;
        cout << "ingrese el segundo numero" << endl;
        cin >> numero2;
        resultado = numero1 / numero2;
        cout << "El cociente es igual a: " << resultado << endl;
        n=1;
        }
        else
        {
            cout << " Error, valor no admitido ";
            n=0;
        }
    }while(n==0);
    return  0 ;
}
