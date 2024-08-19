#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        string expression;
        getline(cin, expression);          
            size_t plus_pos = expression.find('+');
        
        
        int a = stoi(expression.substr(0, plus_pos));   
        int b = stoi(expression.substr(plus_pos + 1));         
     
        cout << (a + b) << endl;
    }
    
    return 0;
}

