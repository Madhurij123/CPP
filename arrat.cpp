#include<iostream>
using namespace std;

inline bool is_even(int num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int ch;
do{
	cout<<"----mneu-----"<<endl;
	cout<<"1.static"<<endl;
	cout<<"2.dymamic"<<endl;
	
	cout<<"ENTER a CHOICE:"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			{
			
			int arr[5] = {1,2,3,4,5};

cout<<"Array Elements are:"<<endl;
for(int i = 0 ; i < 5; i++)
{
	cout<<arr[i]<<endl;
}
}
break;


case 2:
	{
		int n;
		cout<<"Enter a  array size:"<<endl;
		cin>>n;
		int *arr = new int[n];
		
		cout<<"Enbter element:"<<endl;
		for(int i = 0 ; i < n; i++)
		{
			cin>>arr[i];
		}
		
		cout<<"Array Elements are:"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
	break;
	
	case 3:
	exit(0);
	
	
	
	case 4:
		{
		int num;
		cout<<"Enter a element:"<<endl;
		cin>>num;
		int r = is_even(num);
		cout<<r<<endl;
			}
			
			break;
	}


}while(ch!=0);


}
