#include <iostream>
using namespace std;

void print_solution(int n){
    if(n <= 0)
        return;
    cout << n << " ";
    print_solution(n - 1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    print_solution(n);
    return 0;
}