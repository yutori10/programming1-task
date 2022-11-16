#include <iostream>

int sym_to_num(char);
char num_to_sym(int);

int main() {
    int cards[4][13] = {0};
    int card_left;
    std::cin >> card_left;

    char sym;
    int num;
    for(int i=0;i<card_left;i++) {
        std::cin >> sym >> num;
        cards[sym_to_num(sym)][num-1]++;
    }

    for(int i=0;i<4;i++) {
        for(int j=0;j<13;j++) {
            if(cards[i][j]==0) {
                std::cout << num_to_sym(i) << ' ' << j+1 << std::endl;
            }
        }
    }

    return 0;
}

int sym_to_num(char a) {
    int num;

    if(a=='C') { num = 0; }
    if(a=='D') { num = 1; }
    if(a=='H') { num = 2; }
    if(a=='S') { num = 3; }

    return num;
}

char num_to_sym(int a) {
    char sym;

    if(a==0) { sym = 'C'; }
    if(a==1) { sym = 'D'; }
    if(a==2) { sym = 'H'; }
    if(a==3) { sym = 'S'; }

    return sym;
}
