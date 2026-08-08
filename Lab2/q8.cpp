#include <iostream>
#include <string>
using namespace std;

class HostelFee {
private:
    string studentName;
    int hostelID;
    float monthlyFee;
    int months;
    float totalFee;

public:
    void acceptDetails() {
        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, studentName);

        cout << "Enter Hostel ID: ";
        cin >> hostelID;

        cout << "Enter Monthly Fee: ";
        cin >> monthlyFee;

        cout << "Enter Number of Months: ";
        cin >> months;
    }

    void calculateFee(bool delayed) {
        totalFee = monthlyFee * months;

        if (delayed)
            totalFee += 500;
    }

    void display() {
        cout << "\n------ Hostel Fee Details ------\n";
        cout << "Student Name : " << studentName << endl;
        cout << "Hostel ID    : " << hostelID << endl;
        cout << "Total Amount : Rs. " << totalFee << endl;
    }
};

int main() {
    HostelFee h;
    char ch;

    h.acceptDetails();

    cout << "Is payment delayed? (y/n): ";
    cin >> ch;

    h.calculateFee(ch == 'y' || ch == 'Y');
    h.display();

    return 0;
}