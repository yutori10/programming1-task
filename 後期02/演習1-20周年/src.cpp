#include <iostream>

int main() {
    int west_year;
    int held_time;
    std::cin >> west_year;

    held_time = west_year - 2003;
    std::cout << held_time + 1 << std::endl;
    return 0;
}
