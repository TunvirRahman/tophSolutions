#include "iostream"
using namespace std;
int main(){

    double val;
    cin>>val;
    
    int plusSign = val/10;
    cout<<"[";
    for(int i=0;i<plusSign;i++){
        cout<<"+";
    }
    for(int i=0;i<10-plusSign;i++){
        cout<<".";
    }
    cout<<"]";
    cout<<" "<<(int)val<<"%"<<"\n";
}
