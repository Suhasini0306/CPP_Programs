#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void display()           //Virtual function
		{
			cout<<"Display from Base class"<<endl;
		}
};
class Derived : public Base
{
	public:
		void display() override        //Override base class version
		{
			cout<<"Display from Derived class"<<endl;
		}
};
int main()
{
	Base*basePtr;       //Base class pointer
	Derived d;
	basePtr=&d;
	basePtr->display();      //Calls derived version(runtime polymorphism)
	return 0;
}
