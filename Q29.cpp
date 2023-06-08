#include<iostream>
using namespace std;
int main(){
    int alpha=65;
    for(int row=0;row<5;row++){
        for(int col=0;col<5-row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<2*row-1;col++){
            cout<<((char)(alpha+col));
            
        }
        
        cout<<endl;

    }
}