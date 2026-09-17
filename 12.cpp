#include <iostream>
using namespace std;

int main()
{
    double monday,tuesday,wednesday,thursday,friday;

    cout << "Дүйсенбі күнгі шығыны: ";
    cin >> monday;

    cout << "Сейсенбі күнгі шығын: ";
    cin >> tuesday;

    cout << "Сәрсенбі күнгі шығын: ";
    cin >> wednesday;

    cout << "Бейсенбі күнгі шығын: ";
    cin >> thursday;

    cout << "Жұма күнгі шығын: ";
    cin >> friday;

    cout << "5-күндегі жалпы шығын: " << monday + tuesday + wednesday + thursday + friday << endl;
    cout << "5-күндегі орташа шығын: " << (monday + tuesday + wednesday + thursday + friday) / 5 << endl;

    return 0;

}