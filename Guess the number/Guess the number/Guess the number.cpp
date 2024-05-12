#include <iostream>
#include <time.h>

int main() {
    bool restart = true;
    short number;
    std::cout << "=========================================================================" << std::endl;
    std::cout << "Guess the number from 1 to 10" << "                                           =" << std::endl;
    std::cout << "=========================================================================" << std::endl;
    do {
        srand(time(NULL));
        short rezult = 1 + rand() % 10;
        std::cout << "Number: ";
        std::cin >> number;
        if (number == rezult) {
            std::cout << "=========================================================================" << std::endl;
            std::cout << "You guessed it!" << "                                                         =" << std::endl;
            std::cout << "End game" << "                                                                =" << std::endl;
            std::cout << "=========================================================================" << std::endl;
            restart = false;
        }
        else {
            std::cout << "Guessed wrong" << std::endl;
            restart = true;
        }
    } while (restart == true);

    system("pause");
    return 0;
}