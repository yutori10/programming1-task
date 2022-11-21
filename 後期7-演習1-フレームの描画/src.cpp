#include <iostream>

int main() {
    int data_height[300];
    int data_width[300];
    char frame[300][300];
    int made_num = 0;

    for(int i=0;;i++) {
        std::cin >> data_height[i] >> data_width[i];
        if(data_height[i]==0||data_width[i]==0) { break; }
        made_num++;
    }

    std::cout << std::endl;

    for(int i=0;i<made_num;i++) {
        std::fill(frame[0], frame[300], '.');
        for(int j=0;j<data_height[i];j++) {
            frame[j][0] = '#';
            frame[j][data_width[i]-1] = '#';
        }
        for(int j=0;j<data_width[i];j++) {
            frame[0][j] = '#';
            frame[data_height[i]-1][j] = '#';
        }

        for(int j=0;j<data_height[i];j++) {
            for(int k=0;k<data_width[i];k++) {
                std::cout << frame[j][k];
            }
            std::cout << std::endl;
        }
        if(!(i==made_num-1)) { std::cout << std::endl; }
    }

    return 0;
}
