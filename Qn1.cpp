#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>

using namespace std;

char getFirstUnusedChar(const string& str) {
    unordered_map<char, bool> charUsed;
    
    // Mark all characters from 'a' to 'z' as unused
    for (char c = 'a'; c <= 'z'; c++) {
        charUsed[c] = false;
    }
    
    // Mark all characters in the string as used
    for (char c : str) {
        if (isalpha(c)) {
            charUsed[tolower(c)] = true;
        }
    }
    
    // Find the first unused character from 'a' to 'z'
    for (char c = 'a'; c <= 'z'; c++) {
        if (!charUsed[c]) {
            return c;
        }
    }
    
    return ' '; // If no unused character found
}

int main() {
    string str;
    
    getline(cin, str);
    char c = getFirstUnusedChar(str);
    if (c != ' ') {
        cout <<c<< endl;
    }
    return 0;
}
