#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int house_count;
    cin >> house_count;
    int arr[house_count];
    
    for(int i=0; i<house_count; i++)
        cin >> arr[i];
    int min_distance = 100000;
    for(int i=0; i<house_count; i++){
        int str_moim = i;
        int test_distance = 0;
        for(int j=0; j<house_count; j++){
            test_distance += arr[j] * abs(j-i);    
        }
        min_distance = min(min_distance, test_distance);
    }
    cout << min_distance;
    return 0;
}