#include <iostream>
#include <unordered_set>

using namespace std;


int main() {
    int n;
    string s;
    cin >> n>>s; 
    
    unordered_set<char> unique_letters;
    for (char ch : s) {
        unique_letters.insert(tolower(ch));
    }

    cout<<(unique_letters.size() >= 26 ? "YES":"NO")<<endl;

    return 0;
}
