#include <iostream>
using namespace std;
void print_HelloWorld(int N, int n){
    if(n < N){
        cout << "HelloWorld\n";
        n++;
        print_HelloWorld(N,n);
    }
    
}

int main() {
    int N, n = 0;
    cin >> N;
    print_HelloWorld(N, n);
    return 0;
}