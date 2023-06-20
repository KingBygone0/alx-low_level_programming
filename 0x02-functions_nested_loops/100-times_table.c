#include "main.h"
/**
 * print_times_table - print times table up to input
 *
 * Description: Writes times table up to imput not exceeding 15
 * @n: size of times table
 *
 * Return: Nothing
 */
void print_times_table(int n) {
    if (n > 15 || n < 0) {
        return; // Do not print anything for invalid input
    }

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            std::cout << i * j << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    print_times_table(n);

    return 0;
}
