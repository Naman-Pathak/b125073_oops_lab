#include <iostream>
#include <cstring>
using namespace std;
class Locker {
    int lockerNo;
    bool occupied;
    char *code;
    int len;

public:
    Locker() {
        lockerNo = 0;
        occupied = false;
        code = NULL;
        len = 0;
    }
    void setDetails(int no) {
        lockerNo = no;
    }
    void setCode(const char *c) {
        if(code) delete[] code;
        len = strlen(c);
        code = new char[len + 1];
        strcpy(code, c);
        occupied = true;
    }

    void setCode(int pos, char ch) {
        if(code && pos >= 0 && pos < len)
            code[pos] = ch;
    }

    void display() {
        cout << "Locker: " << lockerNo
             << " Occupied: " << occupied
             << " Code: " << (code ? code : "NULL") << endl;
    }

    ~Locker() {
        delete[] code;
    }
};

int main() {
    int n;
    cout << "Enter number of lockers: ";
    cin >> n;

    Locker *L = new Locker[n];

    for(int i=0;i<n;i++){
        L[i].setDetails(i+1);
        char temp[50];
        cout << "Enter code for locker " << i+1 << ": ";
        cin >> temp;
        L[i].setCode(temp);
    }

    L[0].setCode(1,'X');

    cout << "\nLocker Details:\n";
    for(int i=0;i<n;i++)
        (L+i)->display();

    delete[] L;
    return 0;
}
