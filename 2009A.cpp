#include <iostream>

using namespace std;

int main() {
  short a, b, n;
  cin >> n;
  while (n--) {
    cin >> a >> b;
    cout << (b - a) << endl;
  }
  return 0;
}
