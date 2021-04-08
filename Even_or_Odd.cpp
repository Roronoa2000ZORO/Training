#include <iostream>
using namespace std;
/** Even or odd?
    This program checks if the integer entered by the user is even or odd.
 **/
/** Четное или нечетное?
    Данная программа проверяет является ли целое число введенное пользователем четным или нечетным
**/
int main() {
    int number;
    cin >> number;
    if (number % 2 != 1){
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }
    
    
    return 0;
}