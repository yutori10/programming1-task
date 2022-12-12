#include <iostream>

int main() {
    int num_width = 4;
    int num_array[num_width];
    int num = 0;
    for(int i=0;i<4;i++) { std::cin >> num_array[i]; }
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            if(i!=j) {
                if(num_array[i]==num_array[j]) { num++; }
            }
        }
    }
    if(num/2==num_width/2) {
        std::cout << 1 << std::endl;
    } else { std::cout << 0 << std::endl; }
}
