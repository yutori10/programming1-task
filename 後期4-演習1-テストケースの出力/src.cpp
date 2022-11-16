#include <iostream>

int main() {
    int case_array[10000] = {0};
    for(int i=0;i<10000;i++) {
        std::cin >> case_array[i];
        if(case_array[i]==0) { break; }
    }
    for(int i=0;;i++) {
        if(case_array[i]!=0) {
            std::cout << "Case " << i+1 << ": " << case_array[i] << std::endl;
        } else { break; }
    }
    return 0;
}