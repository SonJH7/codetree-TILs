#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int a, b;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        int sum = 0;
        for(int i=a-1; i<b; i++)
            sum += arr[i];
        cout << sum << endl;
    
    }
    return 0;
}