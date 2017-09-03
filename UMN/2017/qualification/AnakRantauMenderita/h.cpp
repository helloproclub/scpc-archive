/*! Solved by: @pamungkaski
 * License  : CC-BY 4.0
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  unsigned long T;
  cin >> T;
  for (unsigned int i = 0; i < T ; ++i){
    double d, p, b;
    cin >> d >> p >> b;
    double baw = (100+b)/100;
    double at = p/d;
    double ans = log10(at)/(log10(baw));
    if(ans < 0) {
      ans = 0;
    }
    cout << "Case #" << i+1 << ": " << ceil(ans) << endl;
  }
  return 0;
}

