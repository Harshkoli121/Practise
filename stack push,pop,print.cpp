#include<bits/stdc++.h>
using namespace std;
#define max 6
class Stack{
    private:
    int top=-1;
    int st_arr[max];
    public:
    void insert(int data);
    void print();
    void pop();
};
void Stack::insert(int data)
{
    if(top==max-1)
    {
        cout<<"stack overflow";
    }else
    {
        top =top+1;
        st_arr[top]=data;
    }
}
void Stack::pop()
{
    if(top==-1)
    {
        cout<<"stack is underflow";
    }else
    {
        top=top-1;
    }
}
void Stack::print()
{
    for(int i=top;i>=0;--i)
    {
        cout<<st_arr[i];
    }
}
int main()
{
    Stack st;
    int n,data;
     while(1){
    cout<<"1.insert"<<endl<<"2.delete"<<endl<<"3,print"<<endl<<"4.exit"<<endl;
    cin>>n;
   
    switch(n){
        case 1:{
            cout<<"enter the elements";
            cin>>data;
            st.insert(data);
        }break;
        case 2:{
            st.pop();
        }break;
        case 3:{
            st.print();
        }break;
        case 4:{
            exit(1);
        }
    }
}
}
