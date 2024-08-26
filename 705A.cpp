#include <iostream>

using namespace std;

int main() {
    short n;
    cin >> n;

    string result;
    for (short i = 0; i < n; i++) {
        if (i > 0)  result += " that ";
        result += (i % 2 == 0 ? "I hate" : "I love");
    }
    result += " it";
    cout << result << endl;

    return 0;
}

