#include<iostream>
using namespace std;
class Car{
    public:
    int Carnumber;
    char Brandname[50];
    int modelyear;
//     Car(int a , char b[],int y){
//         Carnumber = a;
//         Brandname = b;
//         modelyear = y;
//     }
void accept(){
    cout << "Enter Car Number:";
    cin >> Carnumber;
    cout << "Enter BrandName:";
    cin >> Brandname;
    cout << "Enter model year of the car:";
    cin >> modelyear;
}

void display(){
    cout << "Car Number:"<<Carnumber<< endl;
    cout << "BrandName:"<<Brandname<<endl;
    cout << "Model year:"<<modelyear<<endl;
}
};

int main(){
    Car c1;
    c1.accept();
    c1.display();
    return 0;
}