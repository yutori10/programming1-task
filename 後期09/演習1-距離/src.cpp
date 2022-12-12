#include <iostream>
#include <cmath>
using namespace std;

double length(int, int, int, int);

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << length(x1, y1, x2, y2) << endl;
    return 0;
}

double length(int x1, int y1, int x2, int y2) {
    double l = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    return l;
}
