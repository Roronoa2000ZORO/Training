#include <iostream>
using namespace std;
/**The program for the bus service.
   A bus can transport 50 passengers at once.
   User must enter the number of passengers waiting in the bus station as input. 
   The program calculates and outputs how many empty seats the last bus will have.
**/
/**Программа для автобусной службы
   Автобус может перевозить 50 пассажиров за один раз.
   Пользователь должен ввести количество пассажиров, ожидающих на автовокзале, в качестве входных данных. 
   Программа расчитывает и выводит, сколько свободных мест будет в последнем автобусе.
**/
int main() {
    int a = 50;
    int b;
    cin >> b;
    int c = b % a;
    
    cout << a - c << endl;
    
    return 0;
}
