#include <iostream>
using namespace std;

void my_abs(int arr[], int n)
{   
    
    for(int i=0; i<n; i++){
        if( arr[i] > 0)
            cout << arr[i] << " ";
        else
            cout << arr[i] * (-1) << " ";
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
        my_abs(arr,n);
    }

    return 0;
}