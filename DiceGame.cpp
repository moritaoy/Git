#include<bits/stdc++.h>
#include<random>
using namespace std;

int main(){
  cout<<"Rolling the dice..."<<endl;
  srand((unsigned int)time(NULL));
  int x=rand()%6+1;
  int y=rand()%6+1;
  cout<<"Die 1: "<<x<<endl;
  cout<<"Die 2: "<<y<<endl;
  cout<<"Total value: "<<x+y<<endl;
  return 0;
}
