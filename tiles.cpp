#include<iostream>
using namespace std;
// to fill a rectagular shape 4XN with tiles of size 4X1 or 1X4

int tiles(int n){
    if (n < 3) {
        return 1;
    }
    return tiles(n - 1) + tiles(n - 4);
}
    

int main() {
    int n;
    cin >> n;
    cout << tiles(n) << endl;
    return 0;
}