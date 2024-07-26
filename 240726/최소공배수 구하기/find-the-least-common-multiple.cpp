#include <iostream>

using namespace std;
int GCD(int n, int m){
    while(m !=0){
        int temp = m;
        m = n%m;
        n = temp;
    }
    return n;
}
int main() {
    int n, m;
    cin >> n >> m;

    cout << n/GCD(n,m)*m;
    return 0;
}