#include<iostream>
using namespace std;

class queue{
    int top;
    int buttom=0;
    public:
        int array[30];
        queue(){
            top=-1;
        }
        void push(int x);
        void pop();
        void display();
};

void queue::push(int x){
    
    if(top>=29){
        cout<<"queue is full"<<endl;
    }else{
        top++;
        array[top]=x;
        cout<<x<<" is pushed to the queue" <<endl;
    }

}

void queue::pop(){
    if(buttom>top){
        cout<<"queue is empty"<<endl;
    }else{
        
        cout<<"Poped element is: "<< array[buttom]<<endl;
        buttom++;
        
    }
}

void queue::display(){
    if(buttom>top){
        cout<<"empty";
    }else{
        cout<<" ------Queue------"<<endl;
        for(int i=top; i>=buttom;i--){
            cout<<array[i]<<endl;

        }
    }
}

int main(){
    queue queue;
int ch, val; 
   cout<<"1) Push in queue"<<endl;
   cout<<"2) Pop from queue"<<endl;
   cout<<"3) Display queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {   
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            queue.push(val);
            break;
         }
         case 2: {
            queue.pop();
            break;
         }
         case 3: {
            queue.display();
            break;
         }
         case 4: {
            cout<<"------Exit-----"<<endl;
            break;
         }
         default: {
            cout<<"Ops! Invalid Choice, try again."<<endl;
         }
      }
   }while(ch!=4); 
      return 0;
   
}

