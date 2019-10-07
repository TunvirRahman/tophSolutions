#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int caseNo = 0;
    while(n--){
        int a[100];
        vector<pair<int, int>>vp;
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        for(int i=0;i<3;i++){
            vp.push_back(make_pair(a[i], i));
        }
        sort(vp.begin(),vp.end());
        //printf("Case %i:",case+1);
        cout<<"Case "<<caseNo+1<<": ";
        if(vp[2].first == vp[1].first){
            cout<<"Confused\n";
        }else{
            cout<<(char)(vp[2].second+65)<<"\n";
        }
    caseNo++;
    }
}
