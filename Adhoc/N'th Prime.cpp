#include "iostream"
#include "vector"
using namespace std;
bool flag[10000000];
vector<unsigned long>v;
int main(){
    v.push_back(2);
    for(unsigned long i=3;i<10000000;i=i+2){
        if(flag[i]==1)
            continue;
        v.push_back(i);
        for(unsigned long j=2;i*j<10000000;j++){
            flag[i*j]=1;
        }
    }
    long n;
    cin>>n;
    cout<<v[n-1]<<"\n";
}
