#include<iostream>
using namespace std;


template <class T>
T Area(T radius){
        return 3.14 * (radius*radius) ;
    }

int main (){
    float r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;

    cout<<"area is "<<Area(r)<<endl;

}
