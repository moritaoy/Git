#include<bits/stdc++.h>
#include<random>
using namespace std;

int main(){

  cout<<"What is your name?"<<endl;
  string s;
  cin>>s;
  cout<<"Hello, "<<s<<"!"<<endl;
  
  cout<<"Rolling the dice..."<<endl;
  srand((unsigned int)time(NULL));
  int x=rand()%6+1;
  int y=rand()%6+1;
  cout<<"Die 1: "<<x<<endl;
  cout<<"Die 2: "<<y<<endl;
  cout<<"Total value: "<<x+y<<endl;

  if(x+y>7) cout<<s<<" won!"<<endl;
  else cout<<s<<" lose."<<endl;
  return 0;
}
