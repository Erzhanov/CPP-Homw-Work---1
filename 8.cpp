#include <iostream>
using namespace std;

int main()
{
    int l, v;

    cout << "Қашықтықты енгізіңіз: ";
    cin >> l;
    
    cout << "Жылдамдықты енгізіңіз: ";
    cin >> v;

    cout << "Жалпы жолға кеткен уақыт: " << l / v << endl; 

    return 0;
}