#include <iostream>
#include <set>

int main()
{
    int N;
    std::cin >> N;

    int number;
    std::set<int> difNum; // Создаем множество для хранения различных чисел
    for (int i = 0; i < N; i++)
    {
        std::cin >> number;
        difNum.insert(number);
    }

    std::cout << difNum.size() << std::endl;

    return 0;
}