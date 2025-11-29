#include <iostream>
using namespace std;
int main(){
    int array[6]={1,4,6,7,9,3};
    int target=13;
    for (int i=0;i<6;i++){
        for (int j=i+1;j<6;j++){
        if(array[i]+array[j]==target){
            std::cout<<array[i]<<" + "<<array[j]<<" = "<<target<<std::endl;
            int arr[]={i,j};
            cout<<"output: ["<<arr[0]<<","<<arr[1]<<"]"<<endl;
        }};
    }
    return 0;   
}C:\Users\DELL\PREleetcode\PREleetcode\sum\1.two-sum.cpp