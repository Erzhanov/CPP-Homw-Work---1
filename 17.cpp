#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;

    cout << "x-ке мән беріңіз: ";
    cin >> x;

    cout << "y-тің мәні: " << ((2 * pow(x,2) + (3 * x) - 1) / 5) << endl;
    
    return 0;
}