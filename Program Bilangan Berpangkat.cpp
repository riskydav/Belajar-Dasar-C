//Program Bilangan Berpangkat

#include <iostream>
#include <math.h>

using namespace std;

int main()
{   float x,y,hasil;
    cout << "bilangan = ";
    cin >> x;
    cout << "pangkat berapa= ";
    cin >> y;
    hasil = pow (x,y);
    cout << "hasil pangkat= "<< hasil << endl;
    return 0;
}
