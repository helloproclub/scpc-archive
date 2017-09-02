/*! Solved by: @pamungkaski
 *  License  : CC-BY 4.0
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int T;
    vector <int> weapon;
    cin >> T;
    for (int j = 0; j < T ; ++j) {
        int n;
        cin >> n;
        bool cond = true;
        int sisa = 0;
        int last = 0;
        int dmy = 0;
        for (int i = 0; i < n ; ++i) {
            cin >> dmy;
            weapon.push_back(dmy);
        }
        sort(weapon.begin(),weapon.end());
        reverse(weapon.begin(),weapon.end());
        for (int i = 0; i < n ; ++i) {
            cin >> dmy;
            if (cond) {
                if ( dmy - sisa <= 0) {
                    sisa =  sisa - dmy + weapon[last];
                    last++;
                } else {
                    dmy -= sisa;
                    if(weapon[last] >= dmy){
                        sisa = weapon[last] - dmy;
                        last++;
                    } else {
                        cond = false;
                    }
                }
            }
        }
        if(cond){
            cout << "Case #" << j+1 << ": Yes he made it" << endl;
        } else {
            cout << "Case #" << j+1 << ": IMPOSSIBLE" << endl;
        }
        weapon.clear();
    }
    return 0;
}

