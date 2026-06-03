#include<iostream>
using namespace std;

//Inline Function
inline bool is_even(int num)
{
    if(num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//Factroial Number
int fact1(int num)
{
    int fact = 1;

    if(num < 0)
    {
        cout << "Factorial is not defined for zero...!!" << endl;
    }
    else
    {
        for(int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        cout << "Fcatorial of" << num << endl;
    }
}
//Fibonacci series
int fibo(int num)
{
    int a = 0, b = 1, next;

    cout << "fibonacci serie:" << a << " " << b << " " << endl;

    for(int i = 2; i < num; i++)
    {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    return 0;
}
//Traingle
void pattern(int num)
{
    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    int ch, num;

    do
    {
        cout << "------------Menu----------" << endl;
        cout << "1.Inline Function" << endl;
        cout << "2.Factorial Number" << endl;
        cout << "3.Fibonacci Series" << endl;
        cout << "4.Pattern" << endl;
        cout << "5.Exit" << endl;

        cout << "Enter a Choice:" << endl;
        cin >> ch;

        // return ch;

        cout << "Enter a Number=";
        cin >> num;

        switch(ch)
        {
            case 1:
            {
                bool a = is_even(num);
                cout << a << endl;
                break;
            }

            case 2:
            {
                int r = fact1(num);
                cout << r << endl;
                break;
            }

            case 3:
            {
                // cout<<"Enter a Number=";
                // cin>>num;

                int s = fibo(num);
                cout << s << endl;
                break;
            }

            case 4:
            {
                pattern(num);
                break;
            }

            case 5:
                exit(0);

            default:
                cout << "Invalid Choice...!!" << endl;
                continue;
        }

    } while(ch != 0);
}
