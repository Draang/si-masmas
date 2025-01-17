#include <iostream>
using namespace std;

// heap recursion
int factorial(int n)
{
    // n! = n*(n-1)!
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
// tail
int factorial(int n, int acc)
{
    if (n == 0)
        return acc;
    return factorial(n - 1, n * acc);
}
int main(int argc, char const *argv[])
{
    // 3! =3*2*1= 6
    int res = factorial(3);
    cout << res << endl;
    cout << factorial(3, 1) << endl;
    return 0;
}
