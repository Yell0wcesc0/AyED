#include <iostream> // Librería para poder leer y escribir por consola
#include <math.h> // Libreria estándar para operaciones matemáticas
#include <iomanip> // Input-Output manipulation

using namespace std;

float PI = 3.141592;

int main()
{
    float resul;
    float leibniz;
    int n = 0;

    while (leibniz != PI/4)
    {
        resul = pow(-1,n)/(2*n+1);
        leibniz += resul;
        n++;
    }
    
	cout << setprecision(6) << fixed;
    cout << "EL valor de la constante pi es: " << (4 * leibniz) << endl;
	cout << "Se realizaron " << n << " iteraciones" << endl;

    return 0;
}
