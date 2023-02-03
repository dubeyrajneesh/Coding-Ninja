#include <bits/stdc++.h>
using namespace std ;
int main ()

{
int n;
cin>>n;

for(int i=1;i<=n;i++)
{

	for(int j=1;j<= (n-i);j++)
	{
		cout<<" ";
	}
     int p =i;
	for(int k=1;k<=i;k++)
	{
		cout<<p;
		p++;
	}
	cout<<endl;
}

	return 0;
}