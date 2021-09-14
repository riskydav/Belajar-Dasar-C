#include <iostream>

using namespace std;

int main()
{
    int no, jenis;
    cout << "1. Operasi Mata" << endl;
    cout << "2. Operasi Jantung" << endl;
    cout << "Pilih nomor operasi : ";
    cin >> no;
    
    if (no == 1)
    {
        cout << "1. Katarak" << endl;
        cout << "2. Plus/minus" << endl;
        cout << "3. Silinder" << endl;
        cout << "Pilih jenis penyakit : ";
        cin >> jenis;
        
        if (jenis == 1)
        {
            cout << "Biaya = 7500000" << endl;
        }
        
        else if (jenis == 2)
        {
            cout << "Biaya = 5000000" << endl;
        }
        
        else if (jenis == 3)
        {
            cout << "Biaya = 4000000" << endl;
        }
        else
        {
            cout << "salah input" << endl;
            cout << "Biaya = 0" <<endl;
        }
    }
    
    else if (no == 2)
    {
        cout << "1. Jantung Koroner" << endl;
        cout << "2. Katup Jantung" << endl;
        cout << "3. Otot Jantung" << endl;
        cout << "Pilih jenis penyakit : ";
        cin >> jenis;
        
        if (jenis == 1)
        {
            cout << "Biaya = 500000000" << endl;
        }
        
        else if (jenis == 2)
        {
            cout << "Biaya = 350000000" << endl;
        }
        else if (jenis == 3)
        {
            cout << "Biaya = 450000000" << endl;
        }
        else
        {
            cout << "salah input" << endl;
            cout << "Biaya = 0" << endl;
        }
    }
    else 
    {
        cout << "salah input" << endl;
        cout << "Biaya = 0" << endl;
    }
    
    return 0;
}
