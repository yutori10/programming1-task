#include <iostream>

int main() {
    int current_int, normal_int;
    int current_deci, normal_deci;
    double temp_current, temp_normal;
    std::cin >> current_int >> current_deci;
    std::cin >> normal_int >> normal_deci;

    temp_current = current_int + current_deci*0.1;
    temp_normal  = normal_int  + normal_deci*0.1;

    int out_num;
    if(37.5<temp_current) { out_num = 2; }
    else if(temp_normal<temp_current) { out_num = 1; }
    else { out_num = 0; }

    std::cout << out_num << std::endl;
    return 0;
}
