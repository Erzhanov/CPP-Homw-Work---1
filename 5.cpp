#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "A-санын енгізіңіз: ";
    cin >> a;

    cout << "Б-санын енгізіңіз: ";
    cin >> b;

    cout << "Периметр: " << 2 * (a + b) << endl;
    cout << "Аудан: " << a * b << endl;

    return 0;
}