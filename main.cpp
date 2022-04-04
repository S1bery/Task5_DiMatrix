#include <iostream>

int main() {
    float M[4][4];

    std::cout << "M:" << std::endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            std::cin >> M[i][j];
        }
    }
    std::cout << std::endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if (i != j) {
                M[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            std::cout << M[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
