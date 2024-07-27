#include <iostream>

using namespace std;

const char* IsMagicNumber(int n) {
    return (n % 2 == 0 && (n % 10 + n / 10) % 5 == 0) ? "Yes" : "No";
}




int main() {
    int c;
    cin >> c;
    
    cout << IsMagicNumber(c);
    return 0;
}