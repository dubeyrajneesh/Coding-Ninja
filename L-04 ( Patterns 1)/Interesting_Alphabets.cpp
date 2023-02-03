#include <bits/stdc++.h>
using namespace std ;
int main ()

{
    int n;
    cin>>n;

   for(int i=1;i<=n;i++)
   {
      int  k= (n-i+65) ;

       for(int j=1;j<=i;j++)
       {
           char ch = k  ;
           cout<<ch;
           k++;
       }

       cout<<endl;
   }

    return 0;
}