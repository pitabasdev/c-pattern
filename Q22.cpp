#include<iostream>
using namespace std;
int main(){
    for(int row=0;row<5;row++){
        for(int col=0;col<row+1;col++){
            cout<<row+1;
            if(col!=row){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}