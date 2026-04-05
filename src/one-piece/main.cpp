#include <iostream>

int main() {

    int w{};
    std::cout << "Which One Piece episode are you on?: ";
    std::cin >> w;
    
    int x{  1155 - w };
    std::cout << "You have " << x << " episodes remaining\n";

    int y{};
    std::cout << "How much episodes do you plan to watch a day?: ";
    std::cin >> y;

    int z{ x / y };

    if ( z >= 365 ) {

        int z2{ z / 365 };
        int z3{ z % 365 };

        std::cout << "You will be able to finish One Piece in " << z2 << " years\n";
        //std::cout << z3 << '\n';
    }
    else {
        std::cout << "You will be able to finish One Piece in " << z << " days\n";
    }


    return 0;
}
