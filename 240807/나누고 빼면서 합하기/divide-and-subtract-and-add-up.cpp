#include <iostream>
using namespace std;
int is_manjok(int arr[], int sum, int m){
    while(m != 1){
        sum += arr[m-1];
        if(m%2 != 0)
            m--;
        else
            m/=2;
    }
    sum += arr[0];
    return sum;
}



int main() {
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int sum = 0;
    cout << is_manjok(arr, sum, m);
    return 0;
}