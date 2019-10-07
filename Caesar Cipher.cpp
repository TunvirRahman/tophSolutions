#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    
    
    //95 122 2   a(97)
    
    int n;
    cin>>n;
    getchar();
    string str;
    getline(cin, str);
    for(int i=0;i<str.length();i++){
        if(str[i]>=97 && str[i]<=122){
            int temp = str[i]-n;
            if(temp>=97){
                cout<<(char)temp;
            }else{
                int distance = 97-temp;
                cout<<(char)(122-distance+1);
            }
        }else{
            cout<<str[i];
        }
    }
    cout<<"\n";
}


//xyzabc
