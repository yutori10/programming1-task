#include <iostream>

int judge(int,int);
int point(int);

int main() {
    int aizu[3], wakamatu[3];
    int winning_point = 0;
    for(int i=0;i<3;i++) { std::cin >> aizu[i] >> wakamatu[i]; }

    for(int i=0;i<3;i++) {
        winning_point += judge(aizu[i], wakamatu[i]);
    }

    std::cout << point(winning_point) << std::endl;
    return 0;
}

int judge(int a,int b) {
    int out_num = 0;
    if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)) { out_num++; }
    else if(a==b) { out_num = 0; }
    else { out_num--; }
    return out_num;
}

int point(int a) {
    int out_num;
    if(2<=a) { out_num = 0; }
    else if(a==0){ out_num = -1; }
    else { out_num = 1; }
    return out_num;
}
