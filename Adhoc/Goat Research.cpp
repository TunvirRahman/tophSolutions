#include "iostream"
#include "vector"
#include "algorithm"
#include "string"

using namespace std;
int main(){
    
    int n;
    cin>>n;
    getchar();
    vector<string>v;
    vector<string>result;
    while (n--) {
        string str;
        getline(cin, str);
        v.push_back(str);
    }
    long maxLength = 0;
    for(int i=0;i<v.size();i++){
        string strP = v[i];
        long aCount = count(strP.begin(), strP.end(), 'a');
        if(aCount%2==1 && aCount/2!=0){
            strP.erase(strP.length()-1);
        }else if(aCount==1){
            strP.append("a");
        }
        maxLength =  maxLength>strP.length()? maxLength:strP.length();
        result.push_back(strP);
    }
    for(int i=0;i<result.size();i++){
        long leadingSpace =( maxLength - result[i].length())/2;
        cout<<string(leadingSpace,' ')+result[i]<<"\n";
    }
}
