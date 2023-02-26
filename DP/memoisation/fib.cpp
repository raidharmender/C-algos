#include<iostream>
#include<vector>
using namespace std;

vector<int> memo;
int counter = 0;
int fib(int n) {
    counter++;
    if(memo[n] != -1) return memo[n];
    if (n < 3) {
        return 1;
    }
    return memo[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    int x;    
    cin >> x;    
    memo.resize(x + 1, -1);
    cout << fib(x)  << ":" << counter << endl;
    return 0;
}