#include <iostream>
using namespace std;
void arrprint(int x[],int n){
    for(int i=0; i<n; i++)
    {
        if(x[i]%2 == 0)
            cout << x[i]/2 << " ";
        else
            cout << x[i] << " ";

    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    arrprint(arr,n);
    return 0;
}