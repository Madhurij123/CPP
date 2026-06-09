#include<iostream>

using namespace std;

int add(int a, int b, int c,int d)
{
	return a + b + c + d ;
	
}

int main()
{
	int a , b , c, d;
	 cout<<"Enter A number=";
	 cin>>a>>b>>c>>d;
	 
	 int sum = add(a ,b , c, d);
	 cout<<"Sum of Four Number="<<sum;
	 
	 return 0;
}
