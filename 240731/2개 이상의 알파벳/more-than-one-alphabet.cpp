#include <iostream>
#include <string>

using namespace std;

int my_check(int arr[]){
    int check = 0;
    for(int i=0; i<26; i++){
        if(arr[i]>0)
            check++;
    }
    return check;
}

int main() {
    string s;
    cin >> s;
    int arr[26];
    for(int i=0; i<s.length(); i++){
        arr[s[i]-'a']++;
    }
    if(my_check(arr)>1)
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}