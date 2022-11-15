#include <iostream>

int main() {
    int repeat_width;
    std::cin >> repeat_width;
    char repeat[repeat_width];

    int j = 0;
    for(int i=0;i<repeat_width;i++) {
        std::cin >> repeat[i];
        if(i>=repeat_width/2) {
            if(repeat[i]==repeat[0+j]) {
                j++;
            }
        }
    }

    if(j==repeat_width/2) {
        std::cout << "Yes" << std::endl;
    } else { std::cout << "No" << std::endl; }

    return 0;
}
