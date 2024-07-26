#include <iostream>
#include <numeric> // std::gcd가 포함된 헤더 파일
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    cout << gcd(n, m) << endl; // std::gcd를 사용하여 최대공약수 계산 및 출력

    return 0;
}