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
        cout << arr[a-1] + arr[b-1] << endl;
    
    }
    return 0;
}