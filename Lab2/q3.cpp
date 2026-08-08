#include<iostream>
using namespace std;
class Temperature{
    public:
    float tempc, tempf;
    void input(){
        cout<< "Enter temperature in celcius:";
        cin >> tempc;
    }
    void change(){
        tempf = 9*(tempc)/5 +32;
    }
    void display(){
        cout << "Temperature in celcius:"<<tempc<< endl;
        cout << "Temperature in farenhite:"<<tempf;
    }
};
int main(){
    Temperature t1 ;
    t1.input();
    t1.change();
    t1.display();
    return 0;
}