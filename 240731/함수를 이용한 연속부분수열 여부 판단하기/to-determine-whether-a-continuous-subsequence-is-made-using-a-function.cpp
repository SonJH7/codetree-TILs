#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int arra[a];
    int arrb[b];
    
    for(int i = 0; i < a; i++) {
        cin >> arra[i];
    }
    for(int i = 0; i < b; i++) {
        cin >> arrb[i];
    }
    
    int c = 0;
    bool found = false;
    
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            int temp_i = i;
            int temp_j = j;
            c = 0; // Reset counter for each new starting point in arra
            
            while(temp_i < a && temp_j < b && arra[temp_i] == arrb[temp_j]) {
                temp_i++;
                temp_j++;
                c++;
            }
            
            if(c == b) {
                found = true;
                break;
            }
        }
        
        if(found) {
            break;
        }
    }
    
    if(found) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}