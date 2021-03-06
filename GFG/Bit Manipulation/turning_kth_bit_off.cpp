#include <iostream>
#include <bitset>
using namespace std;
 
// Function to turn off k'th bit in `n`
int turnOffKthBit(int n, int k) {
    return n & ~(1 << (k - 1));
}
 
int main()
{
    int n = 15;
    int k = 4;
 
    cout << n << " in binary is " << bitset<8>(n) << endl;
    cout << "Turning " << k << "'th bit off\n";
    n = turnOffKthBit(n, k);
    cout << n << " in binary is " << bitset<8>(n) << endl;
 
    return 0;
}