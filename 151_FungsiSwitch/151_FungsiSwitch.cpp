#include <iostream>
using namespace std;

int luas;

void prosedureLuas(int p, int l) {
    luas = p * l;

}

int main()
{
    int panjang, lebar;
    cout << "Masukkan Panjang :";
    cin >> panjang;
    cout << "Masukkan lebar :";
    cin >> lebar;

    prosedureLuas(panjang, lebar);
    cout << "Luas persegi panjang dengan prosedur :" << luas << endl;


    return 0;
}
