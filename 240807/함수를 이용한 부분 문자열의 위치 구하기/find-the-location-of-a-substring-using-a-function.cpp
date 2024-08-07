#include <iostream>
#include <string>
using namespace std;

int is_subset(const string& all, const string& subset) {
    int n = all.length();
    int m = subset.length();
    
    for(int i = 0; i <= n - m; i++) {
        int j = 0;
        while(j < m && all[i + j] == subset[j]) {
            j++;
        }
        if (j == m) {
            return i;
        }
    }
    return -1;
}

int main() {
    string all, subset;
    cin >> all;
    cin >> subset;
    cout << is_subset(all, subset) << endl;
    return 0;
}