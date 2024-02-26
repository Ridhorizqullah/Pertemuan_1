#include <iostream>
using namespace std;

int main()
{
    //begin
    // numeric,nJejari, nluas
    // display 'masukkan jejari= '
    // accept nJejari
    // compute nLuas = 3.14 * r * r
    // display 'luasnya ' + nLuas
//end

    double nJejari, nLuas;
    cout << "masukkan Jejari = ";
    cin >> nJejari;
    nLuas = 3.14 * nJejari * nJejari;
    cout << "Luasnya = " << nLuas << endl;

    system("pause");
}

