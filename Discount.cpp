#include <iostream>
using namespace std;

int main()
{
    int purchaseAmount = 0;
    float totalPrice;
    int items = 0;
    do {
        cin >> purchaseAmount;
        totalPrice = purchaseAmount * 0.15;
        cout << totalPrice << endl;
        items++;
    } while (items < 3);

    return 0;
}