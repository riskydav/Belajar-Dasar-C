//Program konversi mW ke dBm
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x,y;
    cout << "mW =";
    cin >> x;
    y= 10*log10(x);
    cout << "dBm =" << y << endl;

    return 0;
}
