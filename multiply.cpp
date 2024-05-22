// Write a program to print multiplication of a No.

#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter a no.: ";
   cin>>n;
   for(int i=1;i<=10;i++){
    cout<<n<<" * "<<i<<" = "<<n*i<<endl;
   }
}