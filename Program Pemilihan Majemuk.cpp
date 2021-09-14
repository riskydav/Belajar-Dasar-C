#include <iostream>

using namespace std;

int main()
{
    int kecepatan;
    cin >> kecepatan;
    if (kecepatan > 100)
    {
        cout << "Sangat Cepat" << endl;
    }
    else if (kecepatan > 60)
    {
        cout << "Cepat" << endl;
    }
    else if (kecepatan > 20)
    {
        cout << "Pelan" << endl;
    }
    else if (kecepatan > 0)
    {
        cout << "Sangat Pelan" << endl;
    }
    else
    {
        cout << "Tidak Valid" << endl;
    }
    
    return 0;
    
}
