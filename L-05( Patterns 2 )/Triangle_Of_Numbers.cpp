#include <bits/stdc++.h>
using namespace std;
int main() {

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= (n - i); j++) {
      cout << " ";
    }

    int p = i;
    for (int k = 2; k <= i; k++) {
      cout << p;
      p++;
    }
    int q = ((2 * i) - 1);
    for (int s = 1; s <= i; s++) {
      cout << q;
      q--;
    }

    cout << endl;
  }

  return 0;
}
