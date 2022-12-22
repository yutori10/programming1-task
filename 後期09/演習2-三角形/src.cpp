#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int len_A, len_B, Deg_C;

    cin >> len_A >> len_B >> Deg_C;

    double radC = (Deg_C/180.0)*M_PI;
    int len_C = sqrt(pow(len_A, 2)+pow(len_B, 2)-2*len_A*len_B*cos(radC));
    int height = len_B*sin(radC);

    int area = height*len_A/2;
    int circum = len_A + len_B + len_C;

    cout << area << endl << circum << endl << height << endl;
    return 0;
}