#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
int n;
cin >>n;

map<int, int>friends;
for (int k=0; k <=n; k++){
    friends[k] =0;
}
 int i,j;
 for (int k=0; k<n-1; k++){
     cin >>i>>j;
     friends[i]++;
     friends[j]++;
 }

 for(auto q: friends){
     if(q.second == n-1){
         cout<<"Yes"<<endl;
         return 0;
     }
 }
cout<<"No"<<endl;
    return 0;
}