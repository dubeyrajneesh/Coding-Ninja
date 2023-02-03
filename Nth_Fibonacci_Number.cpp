#include <bits/stdc++.h>
using namespace std ;

int fab(int n)
{
        if(n==0)
        {
                return 0;
        }
        if(n==1)
        {
                return 1;
        }

        int smalloutput1 = fab(n-1);
        int smalloutput2 = fab(n-2);

        int output = smalloutput1 + smalloutput2;
        return output;
}
int main ()

{
  int n;
  cin>>n;

  cout<<fab(n)<<endl;

        return 0;
}