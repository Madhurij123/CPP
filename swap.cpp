// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int main(void)
{
    int n1=10;
    int n2=20;
    
    cout<<"Before swapping";
    cout<<n1<<n2;
    swap(n1,n2);
    cout<<"After Swapping";
    cout<<n1<<n2;
    return 0;
}
int swap(int n1, int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    
}