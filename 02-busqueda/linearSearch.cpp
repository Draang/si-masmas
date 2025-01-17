/**
 * Linear Search: metodo para obtener un item en una lista desordenada
 * en el peor caso la busqueda es n numero de busquedas n siendo el numero de items en la lista
 * O(n)
 */
#include <iostream>
using namespace std;

void search(int array[], int n, int a)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == a)
        {
            cout << "Item encontrado en index:" << i << endl;
        }
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    int array[] = {10, 3, -1, 12, 56, 3, 0};
    // el tamaño se saca de esta manera por que el sizeof saca el tamaño en bytes
    int n = sizeof(array) / sizeof(array[0]);
    search(array, n, 3);
    return 0;
}
