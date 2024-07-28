#include <iostream>
using namespace std;
int sqrt(int a, int b){
    int temp = a;
    for(int i=0; i<b-1; i++)
        a= a*temp;
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << sqrt(a,b);
    return 0;
}