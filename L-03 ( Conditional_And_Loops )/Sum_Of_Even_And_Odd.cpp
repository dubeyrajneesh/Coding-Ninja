#include <bits/stdc++.h>
using namespace std;
int main()

{
  int n, sum1 = 0, sum2 = 0;
  cin >> n;

  for (int i = 1; i <= n; i *= 10) {
    if (((n / i) % 10) % 2 == 0) {
      sum1 = sum1 + ((n / i) % 10);
    }

    else if (((n / i) % 10) % 2 != 0) {
      sum2 = sum2 + ((n / i) % 10);
    }
  }
  cout << sum1 << " " << sum2;

  return 0;
}
