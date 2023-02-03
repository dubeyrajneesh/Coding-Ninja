
#include<iostream>
using namespace std;
int sumeven(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n + sumeven(n-2) ;
	}
}


int main(){

     
int n;
cin>>n;

if(n%2==0)
{
	cout<<sumeven(n)<<endl;
}
else
{
	cout<<sumeven(n-1)<<endl;
}

return 0;

  
}