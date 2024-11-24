#include<iostream>

int main(){


// foreach loop : yinelenebilir bir veri kümesi üzerinde geçişi kolaylaştıran döngü
    int arr[] = {1,2,3,45,6};
    std::string student[] = {"ali", "Veli", "Deli"};


//ikinci studnet ibaresi güncel student değerini yazdırıyor
    for(std::string student : student ){

        //std::cout <<arr <<'\n';
        std::cout << student <<'\n';
    }



}
