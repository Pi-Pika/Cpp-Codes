
#include <bits/stdc++.h>
#define endl "\n"
#define in long long
#define dub double
#define dubb long double
#define pb push_back
#define pi 3.14159265358979323846
using namespace std;

class Solution {
  public:
  uint32_t reverseBits(uint32_t n) {
    uint32_t res = 0;
    for (int i = 0; i < 32; i++) {  // iterate for 32 bits
      int bit = (n >> i) & 1;
      res = res | (bit << (31 - i));
    }

    return res;
  }
};


int main() {
  uint32_t n = 0b00000010100101000001111010011100;  // should add 0b to specify its a binary number
  Solution sol;
  uint32_t res = sol.reverseBits(n);
  cout << res << " " << bitset<32>(res) << endl;  // bitset to print in binary with 32 bits
  return 0;
}