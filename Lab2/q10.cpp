#include <iostream>
#include <string>
using namespace std;

class WaterBill {
private:
    int consumerNo;
    string consumerName;
    int litres;
    float bill;

public:
    void acceptDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;

        cin.ignore();

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);

        cout << "Enter Water Consumption (litres): ";
        cin >> litres;
    }

    void calculateBill() {
        if (litres <= 500)
            bill = litres * 2;
        else if (litres <= 1000)
            bill = (500 * 2) + ((litres - 500) * 3);
        else
            bill = (500 * 2) + (500 * 3) + ((litres - 1000) * 5);
    }

    void displayBill() {
        cout << "\n------ Water Bill ------\n";
        cout << "Consumer Number : " << consumerNo << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Consumption     : " << litres << " litres" << endl;
        cout << "Total Bill      : Rs. " << bill << endl;
    }
};

int main() {
    WaterBill w;

    w.acceptDetails();
    w.calculateBill();
    w.displayBill();

    return 0;
}