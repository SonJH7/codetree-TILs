#include <iostream>
using namespace std;
void sort_ori(int n, int i){
    if(i<=n){
        cout << i++ << " ";
        sort_ori(n, i);
    }
}
void sort_reverse(int n){
    if(n != 0){
        cout << n-- << " ";
        sort_reverse(n);
    }
}



int main() {
    int n,i=1;
    cin >> n;
    sort_ori(n,i);
    cout << endl;
    sort_reverse(n);
    return 0;
}