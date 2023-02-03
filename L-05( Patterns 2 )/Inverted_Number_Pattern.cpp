#include <bits/stdc++.h>
using namespace std ;
int main ()

{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)

{
	int k=n+1-i;

	for(int j=1;j<=(n-i+1);j++)
	{
		cout<<k;
		//k--;
	}
	cout<<endl;
}
	return 0;
}