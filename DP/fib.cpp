#include<iostream>
using namespace std;

int counter = 0;
int fib(int n) {
    counter++;
    if (n < 3) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int x;
    cin >> x;    
    cout << fib(x)  << ":" << counter << endl;
    return 0;
}