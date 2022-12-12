#include <iostream>

int main() {
    int num_width;
    std::cin >> num_width;
    int num_array[num_width];

    for(int i=0;i<num_width;i++) { std::cin >> num_array[i]; }
    for(int i=0;i<num_width;i++) { std::cout << num_array[num_width-1-i] << std::endl; }
    
    return 0;
}