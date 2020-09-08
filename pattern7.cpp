#include<iostream>
using namespace std;
int main()
{
	int i,j,n,m,k;
	cin>>n;
	for (i=1; i<=n; i++)
	{
		int space=n-i;
		//int pat=2*i-1;
		for (j=1; j<=space; j++)
			cout<<" ";
		for (k=1; k<=i; k++)
			cout<<k;
		if (i!=1)
		{
			for (m=i-1; m>=1; m--)
				cout<<m;
		}
	cout<<endl;
	}
return 0;
}