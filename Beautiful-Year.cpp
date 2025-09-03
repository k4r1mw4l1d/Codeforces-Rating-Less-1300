#include <iostream>
#include <vector> // For std::vector<bool>

bool hasUniqueDigits(int number) {
    if (number < 0) {
        number = -number; // Handle negative numbers by considering their absolute value
    }
    std::vector<bool> seen(10, false); // Initialize all to false

    while (number > 0) {
        int digit = number % 10;
        if (seen[digit]) {
            return false; // Digit already seen, so it's a repeated digit
        }
        seen[digit] = true;
        number /= 10;
    }
    return true; // No repeated digits found
}

int main() {
    int year;
    std::cin >> year;

    while (true) {
        year++; // check the next year
        if (hasUniqueDigits(year)) {
            std::cout << year << std::endl;
            break; // stop once found
        }
    }

    return 0;
}
