#include<iostream>
using namespace std;
class HotelRoom{
    public:
    int rno , dstay;
    char gname[50];
    float cpd, trent;
    void input(){
        cout << "Enter the room number:";
        cin >> rno;
        cout << "Enter the GurstName:";
        cin >> gname;
        cout << "Enter the no. of days stayed:";
        cin >> dstay;
        cout << "Enter cost per day:";
        cin >> cpd;
    }
    void calculate(){
        trent = cpd*dstay;
    }
    void display(){
        cout << "The room number:" << rno << endl;
        cout << "The GurstName:" << gname << endl;
        cout << "The no. of days stayed:" << dstay << endl;
        cout << "Cost per day:" << cpd << endl; 
        cout << "Total rent:" << trent << endl;
    }
};
int main(){
    HotelRoom h1;
    h1.input();
    h1.calculate();
    h1.display();
}