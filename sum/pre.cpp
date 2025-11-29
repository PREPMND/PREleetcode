#include <iostream>
using namespace std;        
int main(){
    int array[7]={0,0,1,1,2,2,3};
    int result[7];
    int *ap=result;
    int k=0;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(array[i]==array[j]){
                *ap=array[i];
                ap++;
                k++;    
            }      
        }i++;
    }
    cout<<"OUTPUT: WILL BE HERE\n";
    for(int m=k;m<7;m++){
        *ap=0;
        ap++;
    }
    cout<<result[0]<<" "<<result[1]<<" "<<result[2]<<" "<<result[3]<<" "<<result[4]<<" "<<result[5]<<" "<<result[6]<<endl;
    return 0;
}