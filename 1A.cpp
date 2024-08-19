#include <iostream>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    
    // Calculate the number of flagstones needed for length and width
    long long numFlagstonesLength = (n + a - 1) / a;
    long long numFlagstonesWidth = (m + a - 1) / a;
    
    // Total number of flagstones required
    long long totalFlagstones = numFlagstonesLength * numFlagstonesWidth;
    
    // Output the result
    cout << totalFlagstones << endl;
    
    return 0;
}

