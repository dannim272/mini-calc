#include "iostream"

void mode_mult(){
    float x;
    float y;
    float result;

    std::cout <<  "-> ";
    std::cin >> x;
    std::cout << "-> ";
    std::cin >> y;

    result = x * y;

    std::cout << x << " * " << y << " = " << result << "\n";
    std::cout << "---------------\n";
}

void mode_add(){
    float x;
    float y;
    float result;

    std::cout <<  "-> ";
    std::cin >> x;
    std::cout << "-> ";
    std::cin >> y;

    result = x + y;

    std::cout << x << " + " << y << " = " << result << "\n";
    std::cout << "---------------\n";
}

void mode_div(){
    float x;
    float y;
    float result;

    std::cout <<  "-> ";
    std::cin >> x;
    std::cout << "-> ";
    std::cin >> y;

    result = x / y;

    std::cout << x << " / " << y << " = " << result << "\n";
    std::cout << "---------------\n";
}

void mode_sub(){
    float x;
    float y;
    float result;

    std::cout <<  "-> ";
    std::cin >> x;
    std::cout << "-> ";
    std::cin >> y;

    result = x - y;

    std::cout << x << " - " << y << " = " << result << "\n";
    std::cout << "---------------\n";
}

int main(){
    char usr_mode;
    float x;
    float y;
    float result;

    while(true){

        std::cout << "Which mode would you like to enter?\n";
        std::cout << "Multiplication [m]\n";
        std::cout << "Addition [a]\n";
        std::cout << "Division [d]\n";
        std::cout << "Subtraction [s]\n";
        std::cout << "Exit [e]\n";

        std::cout << "Enter here -> ";
        std::cin >> usr_mode;

        switch (usr_mode) {
            case 'm':
                mode_mult();
                break;

            case 'a':
                mode_add();
                break;


            case 'd':
                mode_div();
                break;


            case 's':
                mode_sub();
                break;

            case 'e':
                return 0;

        }
    }
}

