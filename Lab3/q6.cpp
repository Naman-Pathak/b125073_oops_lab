#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:
    void accept() {
        cout << "Enter Product ID: ";
        cin >> productID;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display() {
        float cost = price * quantity;

        cout << "\nProduct ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Product Cost: " << cost << endl;
    }

    float getCost() {
        return price * quantity;
    }
};

int main() {
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Product *products = new Product[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Product " << i + 1 << ":" << endl;
        products[i].accept();
    }

    float totalInventoryValue = 0;

    cout << "\n===== PRODUCT DETAILS =====" << endl;

    for (int i = 0; i < n; i++) {
        products[i].display();
        totalInventoryValue += products[i].getCost();
    }

    cout << "\nOverall Inventory Value = "
         << totalInventoryValue << endl;

    delete[] products;

    return 0;
}