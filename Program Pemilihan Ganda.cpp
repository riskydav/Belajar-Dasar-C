#include <iostream>

using namespace std;

int main()
{
    int Total, Potongan, Bayar;
    cin >> Total;
    
    if (Total > 50000)
    {
        Potongan = Total/100*20;
        Bayar = Total - Potongan;
        cout << Potongan << endl << Bayar << endl;
    }
    else
    {
        Potongan = Total/100*5;
        Bayar = Total - Potongan;
        cout << Potongan << endl << Bayar << endl;
    }
    
    return 0;
}
