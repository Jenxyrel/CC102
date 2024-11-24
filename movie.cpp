#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    char parent;
    double money;
    string toPrintShow, toPrintMoney;

    cout << "Enter age: ";
    cin >> age;

    if (age < 13) {
        cout << "With parent? (Y/N): "; cin >> parent;
        toPrintShow = (parent == 'Y' || parent == 'y') ? "PG & G show. " : "G show. ";
    } else if (age < 16) {
        cout << "With parent? (Y/N): "; cin >> parent;
        toPrintShow = (parent == 'Y' || parent == 'y') ? "R, PG & G show. " : "PG & G show. ";
    } else {
        toPrintShow = "R, PG & G show. ";
    }

    cout << "Enter amount of money: "; cin >> money;
    toPrintMoney = (money < 7.5) ? "Not enough money. " : (money < 10.5) ? "Can go to matinee show. " : "Can go to evening & matinee show.";

    cout << toPrintMoney << toPrintShow << endl;
    return 0;
}
