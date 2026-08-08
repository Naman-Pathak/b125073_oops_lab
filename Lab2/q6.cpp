#include<iostream>
using namespace std;
class Time{
    public:
    int hr,min;
    void input(){
        cout<<"Enter time:";
        cin>>hr;
        cin>>min;
    }
    Time add(Time t2){
        hr = hr + t2.hr + (min+t2.min)/60;
        min = (min+t2.min)%60;
    }
    void display(){
        cout << hr << ":"<<min << endl;
    }
};
int main(){
    Time t1,t2;
    t1.input();
    t2.input();
    t1.add(t2);
    t1.display();
}