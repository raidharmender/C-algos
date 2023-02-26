#include<iostream>
using namespace std;
// tower of hanoi

void toh(int n, char from, char helper, char to){
    cout << n << "  " << from << "  " << helper << "  " << to << endl;
    if (n == 0) {
        return;
    }
    toh(n - 1, from, to, helper);
    cout << from << "->" << to << endl;
    toh(n - 1, helper, from, to);
}
    

int main() {
    int n;
    cin >> n;
    toh(n, 'A', 'B', 'C');
    return 0;
}