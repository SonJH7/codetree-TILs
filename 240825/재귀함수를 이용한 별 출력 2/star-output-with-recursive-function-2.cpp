#include <iostream>
using namespace std;

void print_solution(int n){
    if(n <= 0)
        return;
    for(int i = 0; i < n; i++){
    cout << "*" << " ";
    }
    cout << endl;
    print_solution(n - 1);
    for(int i = 0; i < n; i++){
    cout << "*" << " ";
    }
}

int main() {
    int n;
    cin >> n;
    print_solution(n);
    return 0;
}