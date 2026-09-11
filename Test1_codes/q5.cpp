#include <iostream>
using namespace std;

class Wallet{
    int id;
    float balance;
    float *transactions;
    int n,index;

public:
    Wallet(int i,int size,float b){
        id=i;
        n=size;
        balance=b;
        index=0;
        transactions=new float[n];
    }

    void transaction(float amount){
        balance+=amount;
        if(index<n)
            transactions[index++]=amount;
    }

    void transaction(float amount,char type){
        if(type=='D')
            balance+=amount;
        else if(type=='W')
            balance-=amount;

        if(index<n)
            transactions[index++]=amount;
    }

    void display(){
        cout<<"Wallet "<<id
            <<" Balance: "<<balance<<endl;
    }

    friend void compareWallet(Wallet &,Wallet &);

    ~Wallet(){
        delete[] transactions;
    }
};

void compareWallet(Wallet &a,Wallet &b){
    if(a.balance>b.balance)
        cout<<"Wallet "<<a.id<<" has larger balance.\n";
    else if(b.balance>a.balance)
        cout<<"Wallet "<<b.id<<" has larger balance.\n";
    else
        cout<<"Both balances are equal.\n";
}

int main(){
    Wallet *w1=new Wallet(1,10,5000);
    Wallet *w2=new Wallet(2,10,3000);

    w1->transaction(-500);
    w1->transaction(1000,'D');

    w2->transaction(700,'D');
    w2->transaction(200,'W');

    w1->display();
    w2->display();

    compareWallet(*w1,*w2);

    delete w1;
    delete w2;

    return 0;
}