//Program Bilangan Akar Kuadrat

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double y=0.5;
    float x,hasil;
    cout << "bilangan = ";
    cin >> x;
    hasil = pow (x,y);
    cout << "hasil pangkat= "<< hasil << endl;
    return 0;
}
