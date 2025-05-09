#include <iostream>
#include <sstream>
#include <cctype>

int main() {
    std::string input;

    std::cout << "Input : ";
    std::getline(std::cin, input);  // Membaca input lengkap, misal "John Doe"

    std::stringstream ss(input);
    std::string word;
    std::string initials;

    while (ss >> word) {
        if (!word.empty()) {
            initials += std::toupper(word[0]);
        }
    }

    std::cout << "Output : " << initials << std::endl;

    return 0;
}
