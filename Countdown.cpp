#include <iostream>

using namespace std;

int main() {
    //The program counts down the number specified by the user to zero.
    //Программа отсчитывает указанное пользователем число до нуля.
    int n;
    cout << "Please enter a number!" << endl;
    cin >> n;
    cout << endl;
    //Also, when the current countdown number is a multiple of 5, the program outputs a signal.
    //Также, когда текущее число обратного отсчета кратно 5, программа выводит сигнал.
    for (int a = 0; n > 0; n--) {
        cout << n << endl;
        if (a == n % 5) {
            cout << "Beep" << endl;
        }
    }
    return 0;
}