#include<iostream>
using namespace std;
class MobileRecharge{
    public:
    long long int mobilenum;
    char name[50];
    float currbalance;
    void input(){
        cout<< "Enter mobile number:";
        cin >> mobilenum;
        cout << "Enter Name:";
        cin >> name;
        cout << "Enter balance:";
        cin >> currbalance;
    }
    void recharge(){
        float a;
        cout << "Enter the recharge plan:";
        cin >> a;
        currbalance = currbalance - a;
    }
    void display(){
        cout<< "Updated balance:" << currbalance;
    }
};
int main(){
    MobileRecharge m1;
    m1.input();
    m1.recharge();
    m1.display();
    return 0;
}