#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int student_num;

    do {
        cin >> student_num;
        if(student_num==0) { break; }
        int points[student_num];

        int sum = 0;
        for(int i=0;i<student_num;i++) {
            cin >> points[i];
            sum += points[i];
        }

        double average = sum/student_num;
        
        double sum_pow = 0;
        for(int i=0;i<student_num;i++) {
            sum_pow += pow(points[i]-average, 2);
        }

        double dispersion = sum_pow/student_num;
        double std_deviation = sqrt(dispersion);

        //cout << "average : " << average << endl;
        // cout << "sum_pow : " << sum_pow << endl;
        // cout << "dispersion : " << dispersion << endl;

        cout << "std_deviation : " << std_deviation << endl;
    } while(student_num!=0);

    return 0;
}
