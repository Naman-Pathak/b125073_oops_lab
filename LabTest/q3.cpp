#include <iostream>
using namespace std;

class QueueDisplay {
    int size;
    int *ids;

public:
    QueueDisplay(){
        size=0;
        ids=NULL;
    }

    void create(int s){
        size=s;
        ids=new int[size];
    }

    void insert(){
        for(int i=0;i<size;i++){
            cout<<"Enter Customer id "<<i+1<<": ";
            cin>>ids[i];
        }
    }

    void display(){
        for(int i=0;i<size;i++)
            cout<<ids[i]<<" ";
        cout<<endl;
    }

    friend void swapQueues(QueueDisplay &,QueueDisplay &);

    ~QueueDisplay(){
        /delete[] ids;
    }
};

void swapQueues(QueueDisplay &a,QueueDisplay &b){
    swap(a.size,b.size);
    swap(a.ids,b.ids);
}

int main(){
    QueueDisplay *Q=new QueueDisplay[2];

    int s;

    cout<<"Enter size of Queue 1: ";
    cin>>s;
    Q[0].create(s);
    Q[0].insert();

    cout<<"Enter size of Queue 2: ";
    cin>>s;
    Q[1].create(s);
    Q[1].insert();

    cout<<"\nBefore Swap\n";
    Q[0].display();
    Q[1].display();

    swapQueues(Q[0],Q[1]);

    cout<<"\nAfter Swap\n";
    Q[0].display();
    Q[1].display();

    delete[] Q;
}