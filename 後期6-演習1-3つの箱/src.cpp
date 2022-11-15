#include <iostream>

int edge(int);

int main() {
    int ball_position = 0;
    int boxes[3] = {0};
    int control_width;
    std::cin >> control_width;
    char control[control_width];

    for(int i=0;i<control_width;i++) {
        std::cin >> control[i];
        if(control[i]=='R') {
            ball_position++;
            ball_position = edge(ball_position);
            boxes[ball_position]++;
        }
        if(control[i]=='L') {
            ball_position--;
            ball_position = edge(ball_position);
            boxes[ball_position]++;
        }
    }

    std::cout << boxes[2] << std::endl;

    return 0;
}

int edge(int a) {
    if(a<0) { a = 0; }
    if(a>2) { a = 2; }
    return a;
}