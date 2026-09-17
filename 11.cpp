#include <iostream>
using namespace std;

int main()
{
    int b_price,b_count,pop_count,pop_price,drink_count,drink_price,a,b,c;

    cout << "Бір билеттің бағасын енгізіңіз: ";
    cin >> b_price;

    cout << "Билеттің санын енгізіңіз: ";
    cin >> b_count;

    cout << "Попкорн бағасын енгізіңіз: ";
    cin >> pop_price;

    cout << "Попкорн санын енгізіңіз: ";
    cin >> pop_count;

    cout << "Сусын бағасын енгізіңіз: ";
    cin >> drink_price;
    
    cout << "Сусын санын енгізіңіз: ";
    cin >> drink_count;

    a = b_count * b_price;
    b = pop_count * pop_price;
    c = drink_count * drink_price;


    cout << "Киноға кеткен жалпы сумма: " << a + b + c << endl;

    return 0;



}