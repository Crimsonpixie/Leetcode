#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void helper(int n,int open,int close,string s){
  if(2*n==s.size()){
  	v.push_back(s);
  	return;
  }
  else{
    if(open<n){
      s.push_back('(');
      helper(n,open+1,close,s); 	
      s.pop_back();
    }
    if(open>close){
      s.push_back(')');
      helper(n,open,close+1,s); 	
      s.pop_back(); 	
    }
  }
}
vector<string> balancedParanthesis(int n){
  string s="";
  helper(n,0,0,s);
  return v;
}
int main(){
  #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);  
 #endif
 ios_base::sync_with_stdio(false); 
 cin.tie(NULL);
 int n;
 cin>>n;
 vector<string> v=balancedParanthesis(n);
 for(int i=0;i<v.size();i++){
 	cout<<v[i]<<" ";
 } 
 return 0;
}