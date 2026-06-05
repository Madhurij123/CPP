#include <iostream>
using namespace std;

class product {
protected:
    string title;
    float price;

public:
    product() {
        title = "Default Product";
        price = 100;
    }

    product(string t, float p) {
        title = t;
        price = p;
    }

    virtual void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    virtual ~product() {}   // IMPORTANT
};

class Book : public product {
private:
    int pages;

public:
    Book() : product("Book", 500), pages(200) {}

    Book(string t, float p, int pg) : product(t, p), pages(pg) {}

    void display() override {
        product::display();
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public product {
private:
    int playtime;

public:
    Tape() : product("Tape", 300), playtime(90) {}

    Tape(string t, float p, int pt) : product(t, p), playtime(pt) {}

    void display() override {
        product::display();
        cout << "Playtime: " << playtime << " minutes" << endl;
    }
};

int initList() {
    int choice;
    cout << "\n0. Exit";
    cout << "\n1. Book";
    cout << "\n2. Tape";
    cout << "\nEnter choice: ";
    cin >> choice;
    return choice;
}

int main() {
    int choice;

    while ((choice = initList()) != 0) {
        product* ptr = nullptr;

        switch (choice) {
        case 1:
            ptr = new Book();
            break;
        case 2:
            ptr = new Tape();
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }

        if (ptr != nullptr) {
            ptr->display();
            delete ptr;
        }
    }

    return 0;
}

