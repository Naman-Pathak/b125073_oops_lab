#include <iostream>
using namespace std;

class Drone {
    int id;
    int battery;
    float hours;

public:
    Drone() {
        id = battery = 0;
        hours = 0;
    }

    void set(int i,int b,float h){
        id=i;
        battery=b;
        hours=h;
    }

    void update(int b){
        battery=b;
    }

    void update(int b,float h){
        battery=b;
        hours=h;
    }

    void display(){
        cout<<"Drone "<<id<<" Battery: "<<battery
            <<"% Hours: "<<hours<<endl;
    }

    friend void compareBattery(Drone &,Drone &);
};

void compareBattery(Drone &a,Drone &b){
    if(a.battery>b.battery)
        cout<<"Drone "<<a.id<<" has higher battery.\n";
    else if(b.battery>a.battery)
        cout<<"Drone "<<b.id<<" has higher battery.\n";
    else
        cout<<"Both have equal battery.\n";
}

int main(){
    Drone *d1=new Drone;
    Drone *d2=new Drone;
    int i1,i2,b1,b2;
    float h1,h2;
    cout << "Enter id,battery, hours of 1st drone:";
    cin >> i1 >>b1 >> h1;
    cout << "Enter id,battery, hours of 2nd drone:";
    cin >> i2 >> b2 >> h2;
    d1->set(i1,b1,h1);
    d2->set(i2,b2,h2);

    d2->update(90);

    d1->display();
    d2->display();

    compareBattery(*d1,*d2);

    delete d1;
    delete d2;

    return 0;
}