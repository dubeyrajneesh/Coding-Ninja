#include <bits/stdc++.h>
using namespace std ;
int main()

{
  int n;
  cin >> n;

  for (int i = 65; i < (65+n); i++)
{

	int k = i ;

	for(int j=65;j<=i;j++)
	{
		char ch = k ;
		cout<<ch;
		k++;
	}
	cout<<endl;
	
}
        return 0;
}