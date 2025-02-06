#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int initial_Balance,fixed_Balance;=0,commit_count=0;
vector<int> tran_count;
vector<int> commit_count;
void read(){
  cout<<fixed_Balance<<endl;
}

void credit(int amount){
  initial_Balance += amount;
  tran_count.push_back(initial_Balance);
}

void debit(int amount){
  initial_Balance -= amount;
  tran_count.push_back(initial_Balance);
}

void commit(int no){
  fixed_Balance = initial_Balance;
  commit_count.push_back(fixed_Balance);
}

void rollback(int no){
  initial_Balance = fixed_Balance;
}

void abort(){

}

int main(){
  int n,amount,no;
  cout<<"Enter the initial Balance :"<<endl;
  cin>>initial_Balance;
  fixed_Balance=initial_Balance;
  cout<<"Enter the no. of transactions :"<<endl;
  cin>>n;
  
  int count = 0;
  while(count < n){
      string ch;
      cout<<"Enter the choice :"<<endl;
      cin>>ch;

      if(ch == "read"){
        read();
      }else if(ch == "credit"){
        cin>>amount;
        credit(amount);
      }else if(ch == "debit"){
        cin>>amount;
        debit(amount);
      }else if(ch == "commit"){
        commit();
      }else if(ch == "rollback"){
        cin>>no;
        rollback(no);
      }else if(ch == "abort"){
        cin>>no;
        abort(no);
      }else{
        continue;
      }
    count++;
  }

 return 0; 
}