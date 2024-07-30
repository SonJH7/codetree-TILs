#include <iostream>
using namespace std;

int main() {
    int m,d;
    cin >> m >> d;
    
    if((m == 5 || m == 1 || m == 3 || m == 7 || m == 8 || m == 10 || m == 12) && (d == 31) )
        cout << "Yes";
    else if(m>12 || d>30)
        cout << "No";
    else if (m == 2 && d > 27)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}