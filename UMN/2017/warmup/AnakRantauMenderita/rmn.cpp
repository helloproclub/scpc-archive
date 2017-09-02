/*! Solved by: @wisn
 *  License  : CC-BY 4.0
 */

#include <iostream>
#include <map>
using namespace std;

int getNum(string s) {
  map <char, int> rmn;
  rmn.insert(make_pair('I', 1));
  rmn.insert(make_pair('V', 5));
  rmn.insert(make_pair('X', 10));
  rmn.insert(make_pair('L', 50));
  rmn.insert(make_pair('C', 100));
  rmn.insert(make_pair('D', 500));
  rmn.insert(make_pair('M', 1000));

  char c, cn;
  int i, ret = 0, n;

  n = s.size();
  for (i = 0; i < n; i++)
  {
    c  = s[i];
    cn = i < n - 1 ? s[i + 1] : '\0';

    switch (c) {
      case 'I':
        if (cn == 'V' || cn =='X')
        {
          ret += rmn[cn] - rmn[c];
          i++;
        }
        else ret += rmn[c];
        break;
      case 'X':
        if (cn == 'L' || cn == 'C')
        {
          ret += rmn[cn] - rmn[c];
          i++;
        }
        else ret += rmn[c];
        break;
      case 'C':
        if (cn == 'D' || cn == 'M')
        {
          ret += rmn[cn] - rmn[c];
          i++;
        }
        else ret += rmn[c];
        break;
      default:
        ret += rmn[c];
    }
  }

  return ret;
}

string getRmn(int num) {
  string m[] = {"", "M", "MM", "MMM"};
  string c[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
  string x[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
  string i[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

  string th = m[num / 1000];
  string hu = c[(num % 1000) / 100];
  string te = x[(num % 100) / 10];
  string on = i[num % 10];

  string ret = th + hu + te + on;

  return ret;
}

int main(){
  int t;
  cin >> t;

  string a, b;
  int i, x, y, z;
  for (i = 0; i < t; i++)
  {
    cin >> a >> b;

    x = getNum(a);
    y = getNum(b);
    z = x + y;

    cout << "Case #" << i + 1 << ": "
         << getRmn(z) << endl;
  }

  return 0;
};

