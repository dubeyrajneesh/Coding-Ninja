#include <bits/stdc++.h>
using namespace std ;
int main ()

{
    int n,N;
    cin>>n;

    N= (n/2)+1 ;


    for(int i=1;i<=N;i++)
    {

for(int j=1;j<=(N-i);j++)
{
    cout<<" ";
}

for(int k=1;k<=(2*i)-1 ;k++)
{
    cout<<"*";
}
cout<<endl;

    }

    for(int i=2;i<=N;i++)
    {
        for(int j=1;j<=(i-1);j++)
        {
            cout<<" ";
        }

        for(int k=1;k<=(2*(N-i)+1);k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}