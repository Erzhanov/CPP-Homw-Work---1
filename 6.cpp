#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "A-санын енгізіңіз: ";
    cin >> a;

    cout << "B-санын енгізіңіз: ";
    cin >> b;

    cout << "B-санын енгізіңіз: ";
    cin >> c;

    cout << "Енгізілген сандардың қосындысы: " << a + b + c << endl;
    cout << "Енгізілген сандардың арифметикалық ортасы: " << (a + b + c) / 3 << endl;

    return 0;
}