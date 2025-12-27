#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,2,2,2,4,5,7,8};
    int j=0;
        for(int i=0;i<10;i++){
        if((i==0)||(arr[i]!=arr[i-1])){
            arr[j]=arr[i];
            j++;
            }
        }
        cout<< j<<endl;
}
