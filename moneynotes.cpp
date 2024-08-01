#include<iostream>
using namespace std;

int main() {
    int n = 1330;
    int money_left = n;
    int hundred_note = 0;
    int fifty_note = 0;
    int twenty_note = 0;
    int one_note = 0;

    switch (1) { 
        case 1:
            hundred_note = money_left / 100;
            money_left = money_left % 100;
            cout << "100 Rupee Note: " << hundred_note << endl;

        case 2:
            fifty_note = money_left / 50;
            money_left = money_left % 50;
            cout << "50 Rupee Note: " << fifty_note << endl;

        case 3:
            twenty_note = money_left / 20;
            money_left = money_left % 20;
            cout << "20 Rupee Note: " << twenty_note << endl;

        case 4:
            one_note = money_left / 1;
            money_left = money_left % 1;
            cout << "1 Rupee Note: " << one_note << endl;
            break;

        default:
            break;
    }

    return 0;
}
