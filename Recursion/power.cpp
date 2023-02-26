#include<iostream>
using namespace std;
//calculate power of an integer
int power(int a, int n){
    if (n == 0) {
        return 1;
    }
    int subprob = power(a, n/2);
    int subprodsq = subprob * subprob;
    if (n & 1) {
        return a * subprodsq;        
    }
    return subprodsq;
}
    

int main() {
    int a, n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    return 0;
}