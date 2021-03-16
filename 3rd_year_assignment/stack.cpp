#include<iostream>
using namespace std;

class stack{
   private:
      int top;
      int n=100;
   public:
      int array[100];
      stack(){
         top=-1; 
      }
      void push(int x);
      void pop();
      void display();
};

void stack::push(int x){
   if(top>=(n-1)){
      cout<<"stack is full";
   }else{
      top++;
      array[top]=x;
      cout<<x<<" is pushed to the stack"<<endl;
      
   }
}

void stack::pop(){
   if(top<0){
      cout<<"stack is empty"<<endl;
   }else{
      cout<<"Poped element is: "<<array[top]<<endl;
      top--;
   }
}

void stack::display(){
   if(top<0){
      cout<<"Nothing to display "<<endl;
   }else{
      cout<<"  ------Stack----"<<endl;
      for(int i=top; i>=0;i--){
         
         cout<<array[i]<<endl;
      }
   }
}

int main(){
   int ch , val;
   stack stack;
   cout<<"    [-----Stack-----]"<<endl<<"1.Push 2.Pop 3.Display 4.Exit"<<endl;
   do
   {
      cout<<"Choice from the above Options: ";
      cin>>ch;
      switch (ch)
      {
      case 1:
       cout<<"Enter the element: ";
       cin>>val;
       stack.push(val);
         break;
      case 2:
      stack.pop();
      break;
      case 3:
      stack.display();
      break;
      case 4:
      cout<<"  -----Exit-----"<<endl;
      break;
      default:
      cout<<"Invalid input, try again "<<endl;
         break;
      }

   } while (ch!=4/* condition */);
   
}