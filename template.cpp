#include<iostream>
using namespace std;

/*template <typename T>
T findmax(T a, T b){

return (a > b) ? a : b;

}


int main()
{
	int a, b;
	cout<<"Enter a two number=";
	cin>>a>>b;
	
	cout<<"Maximun:"<<findmax(a,b)<<endl;
}*/

template <class T>
class cal
{
	T a, b;
	public:
		cal(T x , T y)
		{
			a = x;
			b = y;	
		}
		T add()
		{
			return a + b;
		}
	
};


int main(){
	int x, y;
	cout<<"Enter two number;"<<endl;
	cin>>x>>y;
	
	cal<int> c1(x,y);
	
	cout<<"add:"<<c1.add()<<endl;
}
