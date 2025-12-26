#include <iostream>
using namespace std;
int main(){
    int array[]={1,3,4,5,6,7,2,9,8};
    int largest=array[0];
    int secondlargest=-1;
    int x=-1;
    for(int i=1;i<sizeof(array)/sizeof(array[0]);i++){
        if(array[i]>largest){
            x=secondlargest;
            secondlargest=largest;
            largest=array[i];
        }else if(array[i]<largest && array[i]>secondlargest){
            x=secondlargest;
            secondlargest=array[i];
        }else if(array[i]<secondlargest && array[i]>x){
            x=array[i];
        }
    }
    cout<<"Largest element is: "<<largest<<endl;
    cout<<"Second largest element is: "<<secondlargest<<endl;
    cout<<x<<endl;
    return 0;
}
