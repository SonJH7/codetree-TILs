#include <iostream>
using namespace std;
bool ismankjok(int i){
    int sum=0, digit;
    while(i > 0){
        digit = i%10;
        if(digit % 3 ==0)
            return true;
        sum += digit;
        i/=10;
    }
    return (sum % 3 == 0) ? true : false;
}


int main() {
    
    int a, b, count = 0;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(ismankjok(i))
            count++;
    }
    cout << count;
    return 0;
}