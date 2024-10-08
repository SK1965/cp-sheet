
#include<bits/stdc++.h>

using namespace std;
int main()
{
   string s;
   cin>>s;
   vector<char> vowels = {'A', 'O', 'Y', 'E', 'U', 'I','a' , 'e' ,'i' , 'o' , 'u' , 'y'};
   string ans="";
   for(int i=0;i<s.size();i++){
      int c =  s[i];
      if(find(vowels.begin() , vowels.end() , s[i]) == vowels.end() ){
        ans+='.';
        ans+=tolower(s[i]);
      }
   }
   cout<<ans<<endl;
}