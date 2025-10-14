#include <iostream>
using namespace std;
class Student 
{
	public:
		void show()
		{
			int rollno;
			cin>>rollno;
			cout<<"Hii"<<rollno<<endl;
		}
};
int main()
{
	Student s;
	Student s1;
	s1.show();
	s.show();
	return 0;
}
