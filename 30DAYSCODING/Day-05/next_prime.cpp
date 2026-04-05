#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int nextPrime(int N) {
    if (N < 2) return 2;

    int n= N + 1;

    if (n % 2 == 0) n++;

    while (!isPrime(n)) {
        n += 2; 
    }

    return n;
}
int main(){
    int x;
    cin>>x;
    int r= nextPrime(x);
    cout<<"NEXT PRIME IS: "<<r;
    return 0;
}