#include <iostream>

void evendigits(long long n, int& ans) {
    if (n == 0) {
        return;
    }
    int digit = n % 10;
    if (digit % 2 == 0) {
        ans++;
    }
    evendigits(n / 10, ans);
}

int main() {
    long long number = 9223372036854775806LL;
    int ans = 0;
    evendigits(number, ans);
    std::cout << "Количество четных цифр: " << ans << std::endl;
    return 0;
}
