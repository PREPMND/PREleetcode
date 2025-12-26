#include <iostream>
using namespace std;
int main(){
    int array[]={1,3,4,5,6,7,2,9};
    int largest=array[0];
    for(int i=1;i<sizeof(array)/sizeof(array[0]);i++){
        if(array[i]>largest){
            largest=array[i];
        }
    }
    cout<<"Largest element is: "<<largest<<endl;
}
