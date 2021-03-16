#include<iostream>
using namespace std;

    int sum(int num1, int num2 ){
        return num1+num2;
    }
    float sum(float num1, float num2){
        return num1+num2;
    }
    string sum(string str1, string str2){
        return str1+" "+ str2;
    }

int main(){

    int ivalue1, ivalue2;
    float fvalue1, fvalue2;
    string svalue1,svalue2;

    cout<<"Enter two integer: ";
    cin>>ivalue1>>ivalue2;
    cout<<"sum of two number: "<<sum(ivalue1,ivalue2)<<endl;

    cout<<"Enter two float value: ";
    cin>>fvalue1>>fvalue2;
    cout<<"sum of two float value: "<<sum(fvalue1,fvalue2)<<endl;

    cout<<"Enter two string : ";
    cin>>svalue1>>svalue2;
    cout<<"adding two string value: "<<sum(svalue1,svalue2)<<endl;

}