#include<bits/stdc++.h>
using namespace std;
void rearrange(int *A,int n){
 int i=-1;
 for(int j=0;j<n;j++){
   if(A[j]<0){
     i++;
     swap(A[i],A[j]);
   }	
 }
 int neg=0,pos=i+1;
 while(neg<pos && pos<n && A[neg]<0){
   swap(A[neg],A[pos]);
   neg+=2;
   pos++;	
 } 
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
 int A[n];
 for(int i=0;i<n;i++){
   cin>>A[i];	
 }
 rearrange(A,n);
 for(int i=0;i<n;i++){
   cout<<A[i]<<" ";	
 }
 return 0;
}