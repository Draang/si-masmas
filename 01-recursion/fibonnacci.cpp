#include <iostream>
using namespace std;
// heap
int fibonacci(int n)
{
    // f(n) = f(n-1) - f(n-2)
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    // se puede arreglar el probelma de performance con dynamic programing
    return fibonacci(n - 1) + fibonacci(n - 2);
}
// tail
int fibonacci(int n, int acc1, int acc2)
{
    /**
     * Almacena las dos secuencias anteriores para sacar la proxima
     * */
    if (n == 0)
        return acc1;
    if (n == 1)
        return acc2;

    return fibonacci(n - 1, acc2, acc1 + acc2);
}
int main(int argc, char const *argv[])
{
    cout << fibonacci(10) << endl;
    cout << fibonacci(10, 0, 1) << endl;
    return 0;
}
