#include <iostream>


void happyBirthday(std::string name);

int main(){

    std::string name = "Gokay";

    happyBirthday(name);


    return 0;
}


void happyBirthday(std::string name ){

    std::cout << "Happy birthday  " << name <<'\n';
        std::cout << "Happy birthday dear  " << name <<'\n';

}