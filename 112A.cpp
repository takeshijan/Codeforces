#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string to_lower(const string& s) {
    string lower_s = s;
    transform(lower_s.begin(), lower_s.end(), lower_s.begin(), ::tolower);
    return lower_s;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    s1 = to_lower(s1);
    s2 = to_lower(s2);
    
    if (s1 < s2) {
        cout << "-1";
    } else if (s1 > s2) {
        cout << "1";
    } else {
        cout << "0";
    }
    
    return 0;
}

