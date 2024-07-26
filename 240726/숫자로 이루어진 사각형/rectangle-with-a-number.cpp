#include <iostream>
using namespace std;
void nemocout(int n){
    int a = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a == 10)
                a = 1;
            cout << a++ << " "; 
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    nemocout(n);
    return 0;
}