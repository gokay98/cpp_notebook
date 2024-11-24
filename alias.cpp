#include<iostream>
using namespace std;

//typedef farklı define edilmiş bir keyword başka bir adda tanımlanmak istenirse additional name kullnaılır (alias)
//new identifier for an existing type
//amaç readability i arttırmak.

#include <vector>


//define a very long datatype
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

//veya using ile aynı işlemi gerçekleştirebilriz
using number_t = int;
using text_t = std::string;


int main(){


    //artık bu datatype ı bu kadar uzun yazmak yerine pairlist_t yazacağız.
    //genelde aliaslar _t ile biter

    pairlist_t pairlist;
    text_t firstName="bro";
    number_t age = 5;


    return 0;


}