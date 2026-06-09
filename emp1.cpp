#include<iostream>
#include<string.h>

using namespace std;

struct emp {
	private:
    int empid, salary;
    char empname[50];

public:
void acceptdata()
{
    cout<<"Enter Employee ID: "<<"\n";
    cin>>empid;

    cout<<"Enter Employee Name: "<<"\n";
    cin>>empname;

    cout<<"Enter Employee Salary: "<<"\n";
    cin>>salary;
}

void printdata()
{
    cout<<"Employee ID: "<<empid<<"\n";
    cout<<"Employee Name: "<< empname<<"\n";
    cout<<"Employee Salary: "<< salary<<"\n";
}
};
int main(void)
{
    struct emp e1;   

    e1.acceptdata();
    cout<<"---------------- Employee Details ----------------"<<"\n";
    e1.printdata();

    return 0;
}

