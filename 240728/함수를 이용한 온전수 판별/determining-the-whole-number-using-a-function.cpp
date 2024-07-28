#include <iostream>
using namespace std;
bool isonjean(int i){
    if(i%2==0 || i%10 == 5 || (i%3 ==0 && i%9!=0))
        return false;
    else
        return true;
}

int main() {
    int a, b, count=0;
    cin >> a >> b;
    for(int i=20; i<=30; i++){
        if(isonjean(i))
            count++;
    }
    cout << count;
    return 0;
}