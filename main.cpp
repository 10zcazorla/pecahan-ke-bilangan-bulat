#include <iostream>

using namespace std;

struct pecahan
{
    int pb;
    int py;
};

int main( int argc, char *argv[])
{
    pecahan P,Q;
    cout << "Program untuk mengubah pecahan ke bilangan bulat \n" << endl;
    cout << "\nMasukkan Pembilang : ";
    cin >> P.pb;

    cout << "\nMasukkan Penyebut : ";
    cin >> Q.py;

    cout << "\t    " << (P.pb) << endl;
    cout << "\tP = - " << endl;
    cout << "\t    " << (Q.py) << endl;
    if ("/")
    {
        cout << "\nHasilnya = " << (P.pb)/(Q.py) << endl;
    }
    return 0;
}
