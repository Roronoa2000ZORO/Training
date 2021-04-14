#include <iostream>

using namespace std;

int main()
{       //The program calculates the time from the distance and speed specified by the user to the accuracy of hours and minutes
        //Программа рассчитывает время от расстояния и скорости указанное пользователем до точности часы и минуты.
    setlocale(LC_CTYPE, "Russian");
    int distance, s_km;
    cout << "Please indicate the distance you want to travel!\nПожалуйста, укажите расстояние, которое хотите преодолеть!" << endl;
    cin >> distance;
    cout << "Please indicate your speed!\nПожалуйста, укажите вашу скорость!" << endl;
    cin >> s_km;
    int hour = distance / s_km;
    double distanceF = distance; // Здесь создал переменную чтобы в далнейшем манипулировать значением двойной точности с плавающей запятой
    double s_kmF = s_km;
    double percent1 = distanceF / s_kmF; // Здесь узнаю сколько процентов состовляет дистанция к скорости
    int minutes = 60 * percent1; // Здесь уже получаю мне нужные минуты для первого условия
    if (distance < s_km) {
        cout << "Ваша дорога займет " << hour << "ч " << minutes << "м" << endl;
    }
    else {
        cout << "Ваша дорога займет " << hour << "ч " << minutes % 60 << "м" << endl;
    }
    
    return 0;
}  