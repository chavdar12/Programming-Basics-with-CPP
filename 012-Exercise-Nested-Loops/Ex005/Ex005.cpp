#include <iostream>
#include <vector>

bool is_special(const int num, const int divisor) {
    return num % divisor == 0;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> special_numbers;

    for (int num = 1111; num <= 9999; ++num) {
        int temp_num = num;
        bool is_special_number = true;

        while (temp_num > 0 && is_special_number) {
            const int digit = temp_num % 10;
            temp_num /= 10;
            if (digit == 0 || !is_special(n, digit)) {
                is_special_number = false;
            }
        }

        if (is_special_number) {
            special_numbers.push_back(num);
        }
    }

    for (const auto& num : special_numbers) {
        std::cout << num << " ";
    }

    return 0;
}