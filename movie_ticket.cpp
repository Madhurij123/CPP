#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string movieName;
    int adultTickets, childTickets;
    double adultTicketPrice, childTicketPrice;

    const double DONATION_PERCENT = 10.0;

    cout << "Enter movie name: ";
    getline(cin, movieName);

    cout << "Enter number of adult tickets sold: ";
    cin >> adultTickets;

    cout << "Enter number of child tickets sold: ";
    cin >> childTickets;

    cout << "Enter adult ticket price: $";
    cin >> adultTicketPrice;

    cout << "Enter child ticket price: $";
    cin >> childTicketPrice;


    int totalTicketsSold = adultTickets + childTickets;

    double grossAmount =
        (adultTickets * adultTicketPrice) +
        (childTickets * childTicketPrice);

    double amountDonated = (DONATION_PERCENT / 100.0) * grossAmount;
    double netSale = grossAmount - amountDonated;

    cout << fixed << setprecision(2);

   cout << "\n" << setfill('-') << setw(60) << "-" << endl;
    cout << setfill(' ');

    cout << setw(30) << setfill('.')<<left << "Movie Name:" << movieName << endl;
    cout << setw(30) << left << "Total Tickets Sold:" << totalTicketsSold << endl;
    cout << setw(30) << left << "Gross Amount:" << "$" << grossAmount << endl;
    cout << setw(30) << left << "Donation Percentage:" << DONATION_PERCENT << "%" << endl;
    cout << setw(30) << left << "Amount Donated:" << "$" << amountDonated << endl;
    cout << setw(30) << left << "Net Sale:" << "$" << netSale << endl;

    return 0;
}
