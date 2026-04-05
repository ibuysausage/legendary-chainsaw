#include <iostream>

int main() {

    int x{};
    std::cout << "Which one piece episode are you on?: ";
    std::cin >> x;
    
    int y{  1155 - x };
    std::cout << "You have " << y << " episodes remaining\n";

}
