#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 0, aux = 0, auxMat = 0, cantidad = 0;
    cout << "\nCantidad de elementos: " << endl;
    cin >> cantidad;
    int matriz[cantidad];
    cout << "\nIngresa los números:" << endl;
    for (i = 0; i < cantidad; i++)
    {
        cout << endl
             << i << ": ";
        cin >> matriz[i];
    }
    cout << endl
         << "matriz: " << endl;
    for (i = 0; i < cantidad; i++)
    {
        cout << matriz[i] << " ";
    }

    //INICIO DEL ALGORITMO

    for (i = 0; i < cantidad; i++)
    {
        auxMat = i;
        for(j = i;j < cantidad;j++){
            if (matriz[auxMat]>matriz[j]){
                auxMat = j;
            }
        }
        aux = matriz[i];
        matriz[i]=matriz[auxMat];
        matriz[auxMat] = aux;

    }

    //fIN DEL ALGORITMO
    cout << endl
         << "matriz ordenada: " << endl;
    for (i = 0; i < cantidad; i++)
    {
        cout << matriz[i] << " ";
    }
    cout << endl;
    system("pause");

    return 0;
}