#include<iostream>
#include<algorithm>//next_permutation
using namespace std;

int main(){
    int array[]={4,3,2,1};
    do{
        for(int i=0; i<4; i++){
            cout<<array[i];
            if(i!=3)cout<<" ";
        }
        cout<<endl;
    }while(next_permutation(array,array+4));
    return 0;
}