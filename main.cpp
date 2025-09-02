#include <iostream>

int main() {

    int a =0;
    int b = 1;

    int iterator = 0;

    bool sw = true;

    while (iterator < 10) {
        if (sw) {
            std::cout<<a<<std::endl;
            a = a+b;
            sw = false;
        }
        else {
            std::cout<<b<<std::endl;
            b = a+b;
            sw=true;
        }
        iterator++;
    }




    return 0;
}