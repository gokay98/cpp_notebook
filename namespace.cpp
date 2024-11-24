#include<iostream>
//eğer ki aynı isim isim ile tanımladığımız isme farklı değerler tanımlamak istersek namespace kullanırız

namespace first{
    int x = 1;
}


namespace second{
    int x = 2;
}


int main(){

    using std::cout;
    using std::string;
    using namespace std;

    int x = 0;

    std::cout<<first::x <<std::endl;
    std::cout<<second::x <<std::endl;
    std::cout<<x <<std::endl;

    return 0;


}