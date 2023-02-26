#include<iostream>
using namespace std;
// count binary strings with no consecutive 1's

int count(int n){
    if(n < 3) {
        return n + 1;
    }
    return count(n - 1) + count(n - 2);
}
    

int main() {
    int n;
    cin >> n;
    cout << count(n) << endl;
    return 0;
}