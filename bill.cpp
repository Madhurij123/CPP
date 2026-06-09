#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string name;
    float startMeter, endMeter;
    int unit;
    float bill;

    // Rates
    float rate1 = 4.28;   // 0–100
    float rate2 = 11.10;  // 101–300
    float rate3 = 15.38;  // 301–500
    float rate4 = 17.68;  // 501–1000
    float rate5 = 19.50;  // above 1000

    cout << "Enter Name: ";
    cin>>name;

    cout << "Enter Starting Meter Reading: ";
    cin >> startMeter;

    cout << "Enter Ending Meter Reading: ";
    cin >> endMeter;

    unit = endMeter - startMeter;

    if (unit <= 100)
        bill = unit * rate1;
    else if (unit <= 300)
        bill = (100 * rate1) + (unit - 100) * rate2;
    else if (unit <= 500)
        bill = (100 * rate1) + (200 * rate2) + (unit - 300) * rate3;
    else if (unit <= 1000)
        bill = (100 * rate1) + (200 * rate2) + (200 * rate3) + (unit - 500) * rate4;
    else
        bill = (100 * rate1) + (200 * rate2) + (200 * rate3) +
               (500 * rate4) + (unit - 1000) * rate5;

    float fixedCharge = 130;
    float transmissionCharge = unit * 1.47;
    float duty = bill * 0.16;
    float total = bill + fixedCharge + transmissionCharge + duty;

    // Output
    cout << fixed << setprecision(2);
    cout << "\n" << setfill('-') << setw(60) << "-" << endl;
    cout << setfill(' ');

    cout << setw(20) << left << "Name:" << name << endl;

    cout << setw(20) << left << "Starting Reading:" << startMeter
         << setw(25) << right << "Ending Reading:" << endMeter << endl;

    cout << setw(50) << setfill('.')<< left << "Total Units Consumed:" << unit << endl;
    cout << setw(50) << left << "Electricity Charge:" << "Rs." << bill << endl;
    cout << setw(50) << left << "Fixed Charge:" << "Rs." << fixedCharge << endl;
    cout << setw(50) << left << "Transmission Charge:" << "Rs." << transmissionCharge << endl;
    cout << setw(50) << left << "Electricity Duty (16%):" << "Rs." << duty << endl;
        cout << setfill('-') << setw(60) << "-" << endl;


    cout << setw(50) << right << "Total Bill:" << "Rs." << total << endl;


    return 0;
}
