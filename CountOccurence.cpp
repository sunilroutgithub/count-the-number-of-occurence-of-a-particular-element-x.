//count the number of occurence of a particular element x.
#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int>v(4);
     for(int i=0;i<4;i++){
        cin>>v[i];
     }

     cout<<"enter x:";
     int x;
     cin>>x;
      int count =0;
    for(int i=0;i<v.size();i++) 
          if(v[i]==x){
            count++;
          }

          cout<<count<<endl;
          return 0;
       }
