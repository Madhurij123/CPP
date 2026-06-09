#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;

    void initDate() {
        day = 1;
        month = 1;
        year = 2000;
    }

    void acceptDateFromConsole() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void printDateOnConsole() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
};

int main() {
    Date d;
    int choice;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Initialize Date\n";
        cout << "2. Accept Date from Console\n";
        cout << "3. Print Date on Console\n";
        cout << "4. Check Leap Year\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                d.initDate();
                break;
            case 2:
                d.acceptDateFromConsole();
                break;
            case 3:
                d.printDateOnConsole();
                break;
            case 4:
                if (d.isLeapYear())
                    cout << d.year << " is a leap year." << endl;
                else
                    cout << d.year << " is not a leap year." << endl;
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }

    return 0;
}
