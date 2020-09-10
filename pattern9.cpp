#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k,m;
	cin>>n;
	for (i=1; i<=n; i++)
	{
		// for (j=1; j<=n; j++)
		// 	{
				for (k=n-i+1; k<=5; k++)
					cout<<k;
				for (m=1; m<=n-i; m++)
					cout<<n;
			cout<<endl;
		}
		return 0;
	}



		
