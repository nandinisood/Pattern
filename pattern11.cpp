#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,n,k,p=1;
	cin>>n;
	for (i=1; i<=2*n-1; i++)
	{
		if(i<=n)
		{
			int space=n-i;
			int pat=2*i-1;
			for (j=1; j<=space; j++)
				cout<<" ";
			for (k=1; k<=pat; k++)
				cout<<"*";
		}
		else
		{
			
			if(p<n)
			{
			int space=i-n;
			int pat=(2*(n-p))-1;
			
			for (j=1; j<=space; j++)
				cout<<" ";
			for (k=1; k<=pat; k++)
				cout<<"*";
			p++;
		}}
		cout<<endl;
	}
	return 0;
}