#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char a;
    int b;
    int dx = 0 , dy = 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(a == 'N')
            dy+=b;
        if(a == 'E')
            dx+=b;
        if(a == 'S')
            dy-=b;
        if(a == 'W')
            dx-=b;
    }
    cout << dx <<" "<< dy;
    return 0;
}