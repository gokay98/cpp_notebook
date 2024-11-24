#include <iostream>

int main(){

// ternary operator ?: = replace an if/else statement
//condition ? exprrssion1 : expression2

int grade =  75;

(grade > 100) ? std::cout << "you pass" : std::cout << "you fail";



std::cout<< "\n";


bool hungry = true;

hungry ? std::cout<<"go eat smth" : std::cout<<"dont eat";

return 0;
}