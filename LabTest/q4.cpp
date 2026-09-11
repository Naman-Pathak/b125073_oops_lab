#include <iostream>
#include <string>
using namespace std;

class LabSupervisor;

class Instrument{
    int id;
    string name;
    int accessLevel;

public:
    Instrument(int i,string n,int a){
        id=i;
        name=n;
        accessLevel=a;
    }

    void display(){
        cout<<"ID: "<<id
            <<"\nName: "<<name
            <<"\nAccess Level: "<<accessLevel<<endl;
    }

    friend class LabSupervisor;
};

class LabSupervisor{
public:
    void check(Instrument &obj){
        cout<<"Current Access Level: "
            <<obj.accessLevel<<endl;
    }

    void modify(Instrument &obj,int level){
        obj.accessLevel=level;
    }
};

int main(){
    int i,al;
    string n;
    cout << "Enter id,instrument,access level:";
    cin >> i >> n >> al;
    Instrument *ins=new Instrument(i,n,al);
    LabSupervisor s;

    ins->display();
    s.check(*ins);

    s.modify(*ins,5);

    cout<<"\nAfter Modification\n";
    ins->display();

    delete ins;

    return 0;
}