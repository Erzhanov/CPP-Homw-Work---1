#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;

    cout << "x-тің мәнін енгізіңіз: ";
    cin >> x;

    cout << "y-тің мәні: " << (sqrt(x + 2)) / (pow(x,2) + 1) << endl;

    return 0;


}