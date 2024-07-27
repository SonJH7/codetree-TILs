#include <iostream>
using namespace std;

int min(int a, int b, int c) {
    int min = a;
    if(a < b && a < c)
        min = a;
    else if (b < c)
        min = b;
    else
        min = c;
    return min;
}

int main() {
    int a,b,c;
    cin >> a >> b  >> c;
    cout << min(a, b, c);
    return 0;
}