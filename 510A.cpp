#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> pattern(n);

    for (int i = 0; i < n; ++i) {
     
        pattern[i] = (i % 2 == 0) ? string(m, '#') :
                     (((i / 2) % 2 == 0) ? string(m - 1, '.') + '#' :
                                            '#' + string(m - 1, '.'));
    }

    for (const string& row : pattern) {
        cout << row << endl;
    }

    return 0;
}

