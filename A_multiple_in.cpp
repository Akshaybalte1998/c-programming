#include<iostream>
using namespace std;
class Person
{
	private:
		int id;
		string type;
	public:
		Person()
		{
			cout<<"\n-----this is person default constructor------";	
		}
};
class Student:public Person
{
	private:
		int id;
		string name;
		int rollno;
	public:
		Student()
		{
			cout<<"\n-----this is student default constructor------";
		}
};
class Teacher:public Person
{
	private:
		int id;
		string name;
		string Subject;
	public:
		Teacher()
		{
			cout<<"\n-----this is Teacher default constructor------";
		}
	
};

class College: public Student,public Teacher
{
	private:
		int id;
		string name;
		string address;
	public:
		College()
		{
			cout<<"\n-----this is College default constructor------";
		}		
};
int main451()
{
	College c;
	return 0;
}
