#include <iostream>

int main() {
    int ascii_num;
    int out_num;
    std::cin >> ascii_num;

    if(65<=ascii_num&&ascii_num<=90) { out_num = 1; }
    else if(97<=ascii_num&&ascii_num<=122) { out_num = 2; }
    else { out_num = 0; }

    std::cout << out_num << std::endl;
    return 0;
}
