/*! Solved by: @wisn
 *  License  : CC-BY 4.0
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  short t;
  cin >> t;

  short i;
  long long a, b, c, j, total = 0;
  for (i = 0; i < t; i++)
  {
    cin >> a >> b >> c;

    total  = abs(a - b) + a;
    total /= c;

    cout << "Case #" << i + 1
         << ": " << total << endl;

    total = 0;
  }

  return 0;
};

