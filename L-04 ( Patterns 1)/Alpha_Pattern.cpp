#include <bits/stdc++.h>
using namespace std;
int main()

{
  int n;
  cin >> n;

  for (int i = 65; i < (n + 65); i++) {
    for (int j = 65; j <= i; j++) {
      char ch = i;
      cout << ch;
    }
    cout << endl;
  }
  return 0;
}
