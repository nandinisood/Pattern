#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cin>>n;
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=i; j++)
			{
				if (j==1 || j==i)
					cout<<"1";
				else
					cout<<"0";
			}
			cout<<endl;
		}
		return  0;
	}


		
