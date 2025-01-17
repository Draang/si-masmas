/**
 * Binary Search (Logarithmic search)
 * Encontrar un item en una lista ordenada
 * EN la lista tenemos un numero de items que vamos a ir descartando hasta quedarnos con el item ejemplo
 * Buscamos : C
 * [A,B,C,D,E,F,G]
 * 1. tomamos el pivote ce enmedio : D -> no es el item y nuestro item es menor descartamos todo lo de la derecha
 * [A,B,C]
 * 2. Pivote = B -> no es el item -> es menor -> descartamos lo de la izquierda
 * [C]
 * 3. Pivote = C -> es el item -> fin res
 */
#include <iostream>
using namespace std;
int search(int arr[], int low, int high, int item)
{
    /**
     * ej:
     * [1,2,3,4,5] -> [1,2,3,4,5]
     *  l       h      l   h
     */
    if (low > high)
    {
        // no existe
        return -1;
    }
    int middle = low + (high - low) / 2;
    if (arr[middle] == item)
        return middle;
    if (item < arr[middle])
    {
        // esta a la izquierda
        // ahora solo buscamos a la izquierda desde la mitad
        return search(arr, low, middle - 1, item);
    }
    else
    {
        // derecha
        return search(arr, middle + 1, high, item);
    }
}
int main(int argc, char const *argv[])
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 20, 30, 66, 100};
    int n = 10;
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << "index:" << search(nums, 0, size - 1, n) << endl;
    return 0;
}
