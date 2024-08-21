#include<iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    istringstream stream(s);
    string word;
    while (stream>>word) {
         if (!word.empty()) {
             word[0] = toupper(static_cast<unsigned char>(word[0]));
         }
         cout<<word<<" ";
    }
}
