#include <iostream>
using namespace std;
int main()
{
	int n1=0;
	int n2=1;
	int next;
	for(int i=0; i<5; i++)
	{
		next = n1 + n2;
		cout<<next<<" , ";
		n1=n2;
		n2=next;
	}
}