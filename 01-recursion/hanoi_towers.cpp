/**
 * El problema se basa en tener 3 pilares con placas de diferente tamaño ordenadas de manera de mas grande en la base a el mas pequeño
 * la finalidad es mover todsas las placas de el  pilar inicial a el ultuimo prilar en el mismo orden.
 * Reglas:
 * 1.- solo se puede mover una placa a la vez
 * 2.- solo puedes mover el disco superior de cualquiera de los pilares
 * 3.- no puedes colocar una placa mas grande arriba de una mas pequena
 * 4.- la placa que mueves solo se puede colocar arriba
 *
 *    |     |   |       |   |      |
 *   {|}    |   |       |   |     {|}
 *  {{|}}   |   |   ==> |   |    {{|}}
 * {{{|}}}  |   |       |   |   {{{|}}}
 */
#include <iostream>
using namespace std;
void solve(int disk, char source, char middle, char destination)
{
    if (disk == 0)
    {
        // mas peque
        cout << disk << " from " << source << " to " << destination << endl;
        return;
    }
    solve(disk - 1, source, destination, middle);
    cout << disk << " from " << source << " to " << destination << endl;
    solve(disk - 1, middle, source, destination);
}

int main(int argc, char const *argv[])
{
    /* code */
    solve(2, 'A', 'B', 'C');
    return 0;
}
