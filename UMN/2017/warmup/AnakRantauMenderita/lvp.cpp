/*! Solved by: @wisn
 *  License  : CC-BY 4.0
 */

#include <iostream>
#include <cmath>
using namespace std;

#define endl '\n'

int main(){
  ios_base::sync_with_stdio(false);

  short t;
  cin >> t;

  string res;
  int x, sum = 0;
  short a, b, i, j;
  for (i = 0; i < t; i++)
  {
    cin >> a >> b;

    x = a + b;
    for (j = 1; j <= (int) sqrt(x); j++)
    {
      if (x % j == 0) sum++;
      if (sum > 1) break;
    }

    res = sum > 1
        ? "Tidak Cocok"
        : "Cocok";

    cout << "Case #" << i + 1
         << ": " << res << endl;

    sum = 0;
  }

  return 0;
};

