#include <iostream>

int main() {
    int height_latest;
    int height_previous;
    int height_delta;

    std::cin >> height_previous >> height_latest;
    height_delta = height_latest - height_previous;
    
    std::cout << height_delta << std::endl;

    return 0;
}
