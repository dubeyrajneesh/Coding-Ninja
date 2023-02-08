#include <bits/stdc++.h>
using namespace std;

bool prime(int a) {
  if (a == 1) {
    return false;
  }
  for (int i = 2; i < a; i++) {
    if ((a % i) == 0) {
      return false;
    }
  }
  return true;
}
int main()

{

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (prime(i)) {
      cout << i << endl;
    }
  }

  return 0;
}
