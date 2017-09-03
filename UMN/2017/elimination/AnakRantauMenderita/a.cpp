/*! Solved by: @wisn
 *  License  : CC-BY 4.0
 */

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define endl '\n'

int main(){
  ios_base::sync_with_stdio(false);

  short t;
  cin >> t;

  string x;
  vector <short> dec;
  short i, j, k, l, m, n, sum = 0;
  for (i = 0; i < t; i++)
  {
    cin >> x;

    n = x.size();
    m = n / 6;
    for (j = 0; j < m; j++)
    {
      l = 5;
      for (k = j * 6; k < n; k++)
      {
        sum += x[k] == '0' ? 0 : pow(2, l);

        l--;
      }

      dec.push_back(sum);
      sum = 0;
    }

    short y, z;
    cout << "Case #" << i + 1 << ": ";

    y = dec.size();
    for (j = 0; j < y; j++)
    {
      z = dec[j] < 26
        ? dec[j] + 65
        : dec[j] < 52
        ? dec[j] + 71
        : dec[j] == 62
        ? 43
        : dec[j] == 63
        ? 47
        : dec[j] - 4;

      cout << (char) z;
    } cout << endl;

    dec.clear();
  }

  return 0;
};

