#include<iostream>
using namespace std;
class Array{
    private:
    int array_size=100; //   Size of the array
    int count;
    public:
        int arr[100];
    Array(){// initializing  array with size 
    
        int count=-1;
    }
    int linear_search(int elem);// function for finding element in array
    void insert(int elem);// Insert element in a given location
    void Delete(int elem);//Delete the Entered element from the array
    void binary_search(int elem);
    void Display();

};

int Array::linear_search(int elem){
    
    for(int i; i<array_size;i++){
        if(arr[i]==elem)
            return i;
        return -1;
        
    }
    
}
void Array::insert(int elem){

    if(count>=array_size-1){
        cout<<"Overflow"<<endl;
    }else{
        count++;
        arr[count]=elem;
        cout<<"Inserted element is: "<<elem<<endl;
    }

}
void Array::Delete(int elem){
    int elem_pos=linear_search(elem);
    if(elem_pos<=-1){
     for(elem_pos; elem_pos<=count;elem_pos++){
         arr[elem_pos]=arr[elem_pos+1];
     }

    }else{
        cout<<"Error! Element not found"<<endl;
    }
}
// void Array::binary_search(int elem){
//     int first=0,last=count;
//     int mid=first+(last-first)/2;
//     if (arr[mid]==elem){
//         return mid;
//     }else if{arr[mid]
        
//     }

// }

void Array::Display(){
    if (count<0){
        cout<<"empty"<<endl;
    }else{
        cout<<"---------------"<<endl;
        for(int i=0; i>array_size-1;i++){
            cout<<arr[i]<<" ,";
        }
        cout<<"--------------"<<endl;
    }
}
int main(){
    
    Array array;
    
    int ch, val,temp; 
   cout<<"1) Insert "<<endl;
   cout<<"2) Delete "<<endl;
   cout<<"3) Display "<<endl;
   cout<<"4) linear search"<<endl;
   cout<<"5) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {   
            cout<<"Enter value to be pushed: ";
            cin>>val;
            array.insert(val);
            break;
         }
         case 2: {
            cout<<"Enter the element: ";
            cin>>val;
            array.Delete(val);
            break;
         }
         case 3: {
            array.Display();
            break;
         }
         case 4: {
             cout<<"Enter the element"<<endl;
             cin>>val;
            temp=array.linear_search(val);
            if (temp=-1)
                cout<<temp<<endl;
            cout<<"Element not found"<<endl;
            break;
         }
         case 5:
            cout<<"------Exit----"<<endl;
            break;
         default: {
            cout<<"Ops! Invalid Choice, try again."<<endl;
         }
      }
   }while(ch!=5); 
      return 0;
   
    
}