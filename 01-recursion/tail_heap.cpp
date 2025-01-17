#include <iostream>

using namespace std;

void heap(int n)
{
    if (n == 0)
    {
        // base case
        return;
    }
    // llama a todos los numeros antes de imprimir y despues imprime en cadena por asi decir

    heap(n - 1);

    cout << "Heap function called with n=" << n << endl;
}
void tail(int n)
{
    if (n == 0)
    {
        // base case
        return;
    }
    cout << "Tail function called with n=" << n << endl;
    // llamamos la funcion despues de hacer la accion
    tail(n - 1);
}

int main(int argc, char const *argv[])
{
    /* code */
    // heap(5);
    tail(5);

    return 0;
}
