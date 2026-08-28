#include <iostream>
using namespace std;
int convert(int km) {
    return km * 1000;
}
int convert(long m) {
    return m * 100;
}
float convert(float km) {
    return km * 1000;
}
int main() {
    int km;
    long m;
    float fkm;
    cout << "Enter distance in kilometers (integer): ";
    cin >> km;
    cout << "Enter distance in meters: ";
    cin >> m;
    cout << "Enter distance in kilometers (decimal): ";
    cin >> fkm;
    cout << "\n" << km << " km = " << convert(km) << " meters";
    cout << "\n" << m << " meters = " << convert(m) << " centimeters";
    cout << "\n" << fkm << " km = " << convert(fkm) << " meters";
    return 0;
}