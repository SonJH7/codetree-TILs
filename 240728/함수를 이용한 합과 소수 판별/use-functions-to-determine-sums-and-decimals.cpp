#include <iostream>
using namespace std;


bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}


int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
 
int check(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i) && digitSum(i) % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << check(a, b) << endl;
    return 0;
}