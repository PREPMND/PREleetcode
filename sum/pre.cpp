#include <iostream> ;
using namespace std;        
int main(){
    int array[7]={0,0,1,1,1,2,2};
    int result[7];
    int *ap=result;
    int k=0;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(array[i]==array[j]){
                *ap=array[i];
                ap++;
                i++;
                k++;
            }      
        }
    }
    cout<<"OUTPUT: WILL BE HERE\n";
    for(int k ;k<7;k++){
        result[k]=9;
    }
    cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<array[3]<<" "<<array[4]<<" "<<array[5]<<" "<<array[6]<<endl;
    return 0;
}