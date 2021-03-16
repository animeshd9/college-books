#include<iostream>
using namespace std;
// 0+1 =1
// 1+1=2
// 1+2=3
// 2+3=5
// 3+5=8
int main(){
int i , t1=0, t2=1, next;
    cout<<"Enter positive number "<<endl;
    cin>>i;
    cout<<t1<<" "<< t2<<" ";
    next= t1+ t2;
    
while(next<i){
    cout<<next<<" ";
    t1=t2;
    t2=next;
    next=t1+t2;
}
    
}