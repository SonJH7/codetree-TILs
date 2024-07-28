#include <iostream>
using namespace std;

void isplus(int a, int c){
    cout << a << " + " << c << " = " << a+c;
}

void isminus(int a, int c){
    cout << a << " - " << c << " = " << a-c;
}

void ismul(int a, int c){
    cout << a << " * " << c << " = " << a*c;
}

void isdivide(int a, int c){
   
    cout << a << " / " << c << " = " << int(a/c);
}

int main() {
    int a,c;
    char b;
    cin >> a >> b >> c;
    if(b == '+')
        isplus(a,c);
    if(b == '-')
        isminus(a,c);
    if(b == '*')
        ismul(a,c);
    if(b == '/')
        isdivide(a,c);
    return 0;
}