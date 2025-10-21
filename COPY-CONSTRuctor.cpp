#include <iostream>
using namespace std;

class Student
{
	public:
		int rollno;
		string name;
		Student(int r, string n)
		{
			rollno = r;
			name = n;
		}
		Student(const Student &s)
		{
		   rollno = s.rollno;	
            name = s.name;
		}
	void display()
	{
		cout<<"The roll no of student is : "<<rollno<<" And Name is "<<name<<endl;
	}
};
int main()
{
	Student s1(100, "Jane");
	s1.display();
	Student s2 = s1;
	s2.display();
}
