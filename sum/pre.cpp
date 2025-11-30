#include <iostream>
using namespace std;        
int main(){
    char array[8]={'0','0','1','1','2','4','3','7'};
    char result[7];
    char *ap=result;
    int k=0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if((result[0]!=array[i])&&(result[1]!=array[i])&&(result[2]!=array[i])&&(result[3]!=array[i])&&(result[4]!=array[i])&&(result[5]!=array[i])&&(result[6]!=array[i])){
                *ap=array[i];
                ap++;
                k++;        
            }     
        }
    }
    cout<<"OUTPUT: WILL BE HERE\n";
    for(int m=k;m<7;m++){
        *ap='_';
        ap++;
    }
    cout<<"[ "<<result[0]<<" , "<<result[1]<<" , "<<result[2]<<" , "<<result[3]<<" , "<<result[4]<<" , "<<result[5]<<" , "<<result[6]<<" ]"<<endl;
    return 0;
}