#include <iostream>
#include <vector>

void swapvec(std::vector<int>& vec, int* arr) {
    for (int i = 0; i < 4; ++i) {
        int temp = vec[i];
        vec[i] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    std::vector<int> a = { 1,2,3,4 };

    int b[] = { 5,6,7,8 };

    swapvec(a, b);
    std::cout << "vector = ";

    for (int i = 0; i < 4; ++i)
        std::cout << a[i];

    std::cout << std::endl;
    std::cout << "array = ";

    for (int i = 0; i < 4; ++i)
        std::cout << b[i];
}

