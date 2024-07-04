#include <array>
#include <iostream>


class Human {
public:
    std::string name;
    int age;
    std::array <char, 2> charGen{'M', 'F'};

    void genAS (int i) {
    if (i == 0 || i == 1) {
        selectedChar = charGen[i];
    } else { std::cout << "Invalid Index." << std::endl}
    }

    void displayselectedChar () {
        const unsigned char * selectecChar;
        std::cout << selectecChar
    }

private :
    char selectedChar;

};


int main(){

    Human emily;
    emily.name = "Emily";
    emily.age = 19;
    emily.charGen [1];

    std::cout << emily.charGen (0) << std:endl;
    return 0;
}
