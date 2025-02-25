#include <iostream>
int jumps(int stairs, int max_jump = 3) {
    if (stairs == 0) {
        return 1;
    }
    else if (stairs < 0) {
        return 0;
    }
    int totalWays = 0;
    for (int i = 1; i <= max_jump; ++i) {
        totalWays += jumps(stairs - i, max_jump);
    }
    return totalWays;
}

int main()
{
    system("chcp 1251"); // Установить кодировку
    int max_jump = 3;
    int stairs;
    std::cout << "максимальная длина прыжка: "
        << max_jump << "\nколичество ступенек: ";
    std::cin >> stairs;
    std::cout << jumps(stairs, max_jump);
}