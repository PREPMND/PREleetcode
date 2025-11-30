#include <iostream>
int main(){
    std::cout<<"HELLO!"<<std::endl;
    std::cout<<"Enter The Number You Want Your Lopp To Go Upto:";
    int n;
    std::cin>>n;
    for (int i=0;i<n;i++){
        std::cout<< i+1 <<std::endl;
    }
    return 0;

}