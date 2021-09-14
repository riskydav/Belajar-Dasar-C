// Program untuk menampilkan Nama dan NIM Mahasiswa
#include <iostream>

using namespace std;

int main()
{
    int NIM;
    cout << "Masukan NIM Anda = ";
    cin >> NIM;
    if (NIM==19201038)
    {
        cout << "Risky David Kasyanto" << endl;
        cout << "Halo Risky, Anda Berhasil Login" << endl;
    }
    else
    {
        cout << "Maaf Anda Salah Input NIM" << endl;
    }
    return 0;
}
