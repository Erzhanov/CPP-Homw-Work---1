#include <iostream>
using namespace std;

int main()
{
    int prog,math,eng,ph;

    cout << "Программирование бойынша бағаны енгізіңіз: ";
    cin >> prog;

    cout << "Математика бойынша бағаны енгізіңіз: ";
    cin >> math;

    cout << "Ағылшын тілі бойынша бағаны енгізіңіз: ";
    cin >> eng;

    cout << "Физика бойынша бағаны енгізіңіз: ";
    cin >> ph;

    cout << "Орташа баға: " << (prog + math + eng + ph) / 4 << endl;
    
    return 0;

}