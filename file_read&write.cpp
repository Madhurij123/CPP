#include<iostream>
#include<fstream>
using namespace std;

void file()
{
	ofstream out("stud.txt");
	
	out<<"101 Rahul 86"<<endl;
	out<<"101 Rahul 86"<<endl;
	out<<"101 Rahul 86"<<endl;
	out.close();
	
	cout<<"Data returnn ..!!"<<endl;
	
	ifstream in("stud.txt");
	
	if(!in)
	{
		cout<<"Error:opening for file"<<endl;
		return;
	}
	
	string line;
	
	while(getline(in, line))
	{
		cout<<line<<endl;
	}
	in.close();

}

int main(){
	file();
	return 0;
}
