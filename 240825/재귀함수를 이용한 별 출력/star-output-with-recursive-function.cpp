#include <iostream>
using namespace std;
void print_star(int n, int i){
    if(i <= n){
        for(int j=0; j<i; j++)
            cout << "*" ;
        cout << endl;
    i++;
    print_star(n, i);
    }
    
}
int main() {
    int n, i=1;
    cin >> n;
    print_star(n,i);
    return 0;
}