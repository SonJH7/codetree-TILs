#include <iostream>
using namespace std;
void jogun(int a, int b){
    if( a > b)
        cout << a + 25 << " " << b*2;
    else
        cout << a * 2 << " " << b+25; 
}


int main() {
    int a, b;
    cin >> a >> b;
    jogun(a,b);
    return 0;
}