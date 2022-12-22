#include <iostream>
#include <cmath>
using namespace std;

template <class T>
T cubic(T x) {
    return pow(x, 3);
}

int main() {
    double x;
    cin >> x;
    cout << cubic(x) << endl;
    return 0;
}
