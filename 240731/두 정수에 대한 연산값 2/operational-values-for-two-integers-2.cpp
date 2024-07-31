#include <iostream>
using namespace std;

void mycheck(int a, int b){
    if(a>b)
        cout << a*2 << " " << b + 10;
    else
        cout << a+10 << " " << b*2;
    
}

int main() {
    int a,b;
    cin >> a >> b;
    mycheck(a,b);
    return 0;
}