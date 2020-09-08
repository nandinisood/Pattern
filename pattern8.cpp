#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,n,k=1;
	cin>>n;
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=pow(2,i-1); j++)
			{cout<<k++<<" ";
			if(k==10)
				k=1;
			}
		cout<<endl;
	}
	return 0;
}

		
