#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "a-қабырғасына мән енгізіңіз: ";
    cin >> a;

    cout << "b-қабырғасына мән енгізіңіз: ";
    cin >> b;

    cout << "c-қабырғасына мән енгізіңіз: ";
    cin >> c;

    d = (a + c + b) / 2;
        
    cout << "Ұшбұрыштың ауданы: " << sqrt(d*(d-a)*(d-b)*(d-c)) << endl;
    
    return 0;




}