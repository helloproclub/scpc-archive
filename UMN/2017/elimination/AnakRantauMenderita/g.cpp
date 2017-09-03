/*! Solved by: @pamungkaski
 *  License  : CC-BY 4.0
 */

#include <iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int T;
  cin >> T;
  for (int i = 0; i < T; ++i){
    long N, M;
    cin >> N >> M;
    long y, z;
    if(N == 1){
      cout << "Case #" << i+1 << ": "<< 0 << " " << 1 << endl;
    }else{
      N -= 1;
      z = N;
      y = 1;
      while(N - M > 0){
        z--;
        y++;
        N -= M;
      }
      cout << "Case #" << i+1 << ": "<< y << " " << z << endl;
    }
  }
  return 0;
}
