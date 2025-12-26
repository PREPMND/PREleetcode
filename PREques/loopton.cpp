#include <iostream>
int main(){
    std::cout<<"HELLO!"<<std::endl;
    std::cout<<"Enter The Number You Want Your Lopp To Go Upto:";
    int n;
    std::cin>>n;
    std::cout<<"Enter HOW Mnay Numbers You Want To skip:";
    int skipCount;
    std::cin>> skipCount;
    int array[skipCount];
    for(int i=0;i<skipCount;i++){
        std::cout<<"Enter The "<< i+1 <<" Number You Want To skip:";
        std::cin>>array[i];
    }
    for (int i=0;i<n;i++){
        bool skip;
        for(int j=0;j<skipCount;j++){
            if(i+1==array[j]){skip=true;i++;}
        }
        if(skip!=true){
            std::cout<<i+1<<std::endl;
        }
    }
    return 0;

}