#include <iostream>
using namespace std;

int fact(int n)
	{
		if(n>1)
		{
		    return(n*fact(n-1));
		}
		else 
		{
			return 1;
		}
	}
	
int main()
{
	int i;
	cout<<"Enter the n values:";
	cin>>i;
	cout<<"factorial ="<<fact(i);
	
	return 0;
} 
