#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    float salary;

public:
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: " << salary << endl;
    }

    float getSalary() {
        return salary;
    }

    string getName() {
        return employeeName;
    }

    int getID() {
        return employeeID;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee *employees = new Employee[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee "
             << i + 1 << ":" << endl;

        employees[i].accept();
    }

    cout << "\n===== EMPLOYEE DETAILS =====" << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        employees[i].display();
    }

    int highestIndex = 0;
    float totalSalary = 0;

    for (int i = 0; i < n; i++) {
        totalSalary += employees[i].getSalary();

        if (employees[i].getSalary() >
            employees[highestIndex].getSalary()) {
            highestIndex = i;
        }
    }

    float averageSalary = totalSalary / n;

    cout << "\n===== HIGHEST SALARY =====" << endl;
    employees[highestIndex].display();

    cout << "\nAverage Salary = "
         << fixed << setprecision(2)
         << averageSalary << endl;

    delete[] employees;

    return 0;
}