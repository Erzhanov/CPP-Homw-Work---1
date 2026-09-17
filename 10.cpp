#include <iostream>
using namespace std;

int main()
{
    int food_price,food_count,drink_price,drink_count;

    cout << "Бір тағамның бағасын енгізіңіз: ";
    cin >> food_price;


    cout << "Тағам санын енгізіңіз: ";
    cin >> food_count;


    cout << "Бір сусынның бағасын енгізіңіз: ";
    cin >> drink_price;


    cout << "Сусынның санын енгізіңіз: ";
    cin >> drink_count;

    cout << "Жалпы суммасы: " << (food_price * food_count) + (drink_price * drink_count) << endl;

    return 0;

}