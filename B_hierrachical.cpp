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
int main11()
{
	Teacher t;
	Student s;
	return 0;
}
