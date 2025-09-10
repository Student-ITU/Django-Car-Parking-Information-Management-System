
#include <iostream>
using namespace std;

int main () {

std::cout << "\033[1;32mHello, World!\033[0m" << std::endl;

std::cout << "\033[4;31mEnter your name: \033[0m"; // 4 pe line, 1 pe thora bold, 2 pe normal, 3 pe italic, 5 normal, 6 normal, 7 pe full color of word, 8 pe kuch nhi, 9 pe line in the centre like cutting a word, 10 normal, 21 pe neeche line, 45 pe full word color, 100 pe bhe word color
std::string name;
std::cin >> name;

std::cout << "\033[1;32m" << name << std::endl;
    cout << "\033[1;33mHello Hi Bye : \033[0m" << endl;
    return 0;
}
