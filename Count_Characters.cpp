#include <bits/stdc++.h>
using namespace std ;
int main ()
{
  int p;
  p = cin.get() ;
  int count1=0;
  int count2=0;
  int count3=0;
  while(p!= '$')
  {

    if(p>=97 && p<=122)
    {
      count1++;
    }

    else if(p>=48 && p<=57)
    {
      count2++;
    }
    else if( p== ' ' || p== '\n' || p=='\t')
    {
      count3++;
    }
    p= cin.get() ;

    
  }
  cout<<count1<<" "<<count2<<" "<<count3 ;

  return 0;
}