#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<long long int,int> &p1,pair<long long int,int> &p2){
    return p1.second<p2.second;
}

int main() {
  int t;
  cin>>t;
  
  for(int i=0;i<t;++i){
   int a[9];
   for(int i=0;i<9;++i) cin>>a[i];
   int flag=0,
   
   a1=0,a2=0;
   for(int i=0;i<3;++i){
       if(a[i]>a[i+3]) a2++;
       else if(a[i]==a[i+3]) a1++;
   }
   if((a1+a2==3||a2==0)&&a1<3) flag++;
   
   a1=0,a2=0;
   for(int i=3;i<6;++i){
       if(a[i]>a[i+3]) a2++;
       else if(a[i]==a[i+3]) a1++;
   }
   if((a1+a2==3||a2==0)&&a1<3) flag++;
   
   a1=0,a2=0;
   for(int i=0;i<3;++i){
       if(a[i]>a[i+6]) a2++;
       else if(a[i]==a[i+6]) a1++;
   }
   if((a1+a2==3||a2==0)&&a1<3) flag++;
   
   if(flag==3) cout << "yes" <<endl;
   else cout << "no" << endl;
   
  }
      
  return 0;
}
