#include <iostream>
using namespace std;

class student
{
private:
    int id;
    string name;

public:
    student()
    {
        id = 10;
        name = "madhuri";
    }

    student(int i, string n)
    {
        id = i;
        name = n;
    }
    void setter(int i)
    {
    	id = i;
	}
	int getter()
	{
		return id;
	}
    virtual void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
    ~student()
    {
    	cout<<"destructor invoked....!!";
	}
};

class Emp : public student
{
private:
    int roll;

public:
    void display() override
    {
        cout << "Welcome...!!" << endl;
    }
};

int main()
{
	int ch;
	cout<<"Enter a choice:";
	cin>>ch;
	switch(ch){
		
		case 1:
			{
	student s1;
   student s2(101,"hhd");
   s1.display();
   
   
   student s3 = s1;
   s3.display();
			}
			break;
			
			case 2:
				{
					student s1;
	 s1.setter(12);
     s1.getter();
     s1.display();
  
Emp e;
e.	display();
				}
				break;
				
				case 3:
					{
						
					}
	}
   
    return 0;
}
