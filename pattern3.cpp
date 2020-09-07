#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cin>>n;
	for (i=1; i<=n; i++)
	{
		int space=n-i;
		int pat=2*i-1;
		for (j=1; j<=space; j++)
			cout<<" ";
		for (k=1; k<=pat; k++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}