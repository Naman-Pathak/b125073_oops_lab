#include<iostream>
using namespace std;
class Square{
    public:
    int length,peri,area;
    void input(){
        cout << "Enter length:";
        cin>> length;
    }
    void perimeter(){
        peri = 4*length;
    }
    void areah(){
        area = length*length;
    }
    void display(){
        cout << "Side length:"<< length << endl;
        cout << "Perimeter:"<<peri << endl;
        cout << "Area:" << area << endl;
    }
};
int main(){
    Square s1;
    s1.input();
    s1.perimeter();
    s1.areah();
    s1.display();
    return 0;
}