#include <bits/stdc++.h>
using namespace std;
int main(){
   int t; cin>>t;
   while(t--){
     string s; cin>>s; string s_a="a",s_b="b",s_z="z",s_y="y";
     for(int i=0;i<s.length();i++){
        if(i%2==0 && s[i]=='a') s.replace(i,1,s_b);
        else if(i%2==0 && s[i]!='a') s.replace(i,1,s_a);
        else if(i%2==1 && s[i]=='z') s.replace(i,1,s_y);
        else if(i%2==1 && s[i]!='z') s.replace(i,1,s_z);
     }
     cout<<s<<endl;
   }
}
