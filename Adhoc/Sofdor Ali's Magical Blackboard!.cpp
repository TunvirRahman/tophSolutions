#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    while (n--) {
        long long a,b;
        cin>>a>>b;
        long long sum = 0;
        for(int i=0;i<b;i++){
            sum = sum + a;
        }
        cout<<sum<<"\n";
    }
}
