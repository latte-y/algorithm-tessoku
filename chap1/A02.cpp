#include <iostream>

int main() {
    int N, X;
    std::cin >> N >> X;
    int A[100]; //A[X]にはできない。
    for(int i=0; i<N; i++) {
        std::cin >> A[i];
    }

    bool isContainX = false;
    for (int i=0; i<N; i++) {
        if (X==A[i]) {
            isContainX = true;
            break;
        }
    }

    if(isContainX) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}