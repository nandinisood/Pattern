#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k,m;
	cin>>n;
	for (i=1; i<=n; i++)
	{
		int space=n-i;
		int bet_space=n-2;
		for (j=1; j<=space; j++)
			cout<<" ";
		if (i==1||i==n)
		{
			for (m=1; m<=n; m++)
				cout<<"*";
		}
		else
		{
			cout<<"*";
			for (k=1; k<=bet_space; k++)
				cout<<" ";
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}




		
