#include <iostream>
#include <string>

using namespace std;

void palindrome(string &s) {
    int n =s.length();
    int count = 0;
    for(int i=0; i<(n/2); i++){
        if(s[i] == s[n-i-1])
            count++;
    }
    if(count == (n/2))
        cout << "Yes" << endl;
    else    
        cout << "No" << endl;
}

int main() {
    string str;
    cin >> str;
    palindrome(str);
    
    return 0;
}