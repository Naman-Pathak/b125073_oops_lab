#include<iostream>
using namespace std;
class MovieTicket{
    public:
    char moviename[50];
    int ticketprice,nooftickets,total;
    void accept(){
        cout << "Enter moviename:";
        cin>>moviename;
        cout << "Enter ticket price:";
        cin >> ticketprice;
        cout << "Enter no of tickets:";
        cin>> nooftickets;
    }
    void calculate(){
        total = ticketprice * nooftickets;
    }
    void display(){
        cout << "MovieName:"<< moviename << endl;
        cout << "TotalCost:" << total<< endl;
    }
};
int main(){
    MovieTicket t1;
    t1.accept();
    t1.calculate();
    t1.display();
}