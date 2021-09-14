//Program Menghitung Luas Lingkaran

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    const double phi=3.14;
    int r;
    double luas_lingkaran, l;

    cout << "Masukan jari-jari = ";
    cin >> r;

    luas_lingkaran= phi * r * r;
    cout << "Hasil luas lingkaran= " << luas_lingkaran <<endl;

    return 0;
}
