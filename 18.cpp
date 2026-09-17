#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int v,a,t;

    cout << "Бастапқы жылдамдықтың мәнін енгізіңіз: ";
    cin >> v;

    cout << "Үдеудің мәнін енгізіңіз: ";
    cin >> a;

    cout << "Уақыттың мәнін енгізіңіз: ";
    cin >> t;

    cout << "S-тің мәні: " << (v * t) + (a * pow(t,2)/(2)) << endl;

    return 0;

}