#include<iostream>
using namespace std;
// number of ways friends can be paired (only once) or remain single

int pairing(int n){
    if (n < 2) {
        return 1;
    }
    return pairing(n - 1) + (n - 1) * pairing(n - 2);
}
    

int main() {
    int n;
    cin >> n;
    cout << pairing(n) << endl;
    return 0;
}