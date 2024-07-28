#include <iostream>
using namespace std;

const char* yunnean(int a){
    if(a % 4 != 0 || (a % 100 == 0 || a % 400 != 0) )
        return "false";
    else
        return "true";
}

int main() {
    int a;
    cin >> a;
    cout << yunnean(a);
    return 0;
}