#include <iostream>

int main(){

//sizeof() fonksiyonunu arraydeki herhangi bir elemente bölürsen o arraydeki eleman sayısını bulursun.

char grades[] = {'A','B','C','D'};

std::cout <<sizeof(grades)/sizeof(char) << " elements";

std::cout <<sizeof(grades)/sizeof(grades[2]) << " elements";


    return 0;
}