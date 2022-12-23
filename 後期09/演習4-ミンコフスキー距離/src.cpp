#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
//わかんない

int main() {
    int n;
    cin >> n;
    int x_array[n];
    int y_array[n];
    int answer[4];

    for(int i=0;i<n;i++) {
        cin >> x_array[i];
    }
    for(int i=0;i<n;i++) {
        cin >> y_array[i];
    }

    for(int p=1;p<4;p++) {
        int D = 0;
        for(int i=0;i<n;i++) {
            D += pow(abs(x_array[i]-y_array[i]), p);
        }
        D = pow(D, 1/p);
        answer[p-1] = D;
    }

    answer[3] = abs(*max_element(x_array, x_array+n)-*max_element(y_array, y_array+n));

    for(int i=0;i<4;i++) {
        cout << answer[i] << endl;
    }

    return 0;
}