#include<iostream>
using namespace std;
class stack{
    int top,a[100],size;
    public:
        stack(int n){
            top =-1;
            size= n;
        }
        friend stack operator + (stack,int);
        friend stack operator -- (stack);
        friend ostream &operator<<(ostream & , stack); 
};

stack operator + (stack s1,int ele){
    if(s1.top == s1.size-1){
        cout<<"\noverflow\n";
    }else{
        s1.a[++s1.top]=ele;
    }
        return (s1);   
}
stack operator --(stack s1){
    if(s1.top == -1){
        cout<<"\nunderflow\n";
    }else{
        cout<<s1.a[s1.top--]<<"is removed\n";
    }
    return (s1);
}

ostream &operator<<(ostream &print,stack s1){
    if(s1.top == -1){
        cout<<"\nstack empty\n";
    }
    print<<"\nstack status : ";
    for(int i=s1.top;i>=0;i--){
        print<<s1.a[i]<<"\t";
    }
    return print;
}

int main(){
    int ele,n,ch;
    cout<<"\nenter the size of stack : \n";
    cin>>n;
    stack s1(n);
    do{
        cout<<"\n1.push\n2.pop\n3.display\n4.exit\nenter your chocie: \n";
        cin>>ch;
        switch(ch){
            case 1:cout<<"\nenter teh ele to be pushed : \n";
                    cin>>ele;
                    s1 = s1+ele;
                    cout<<s1;
                    break;
            case 2: s1 = --s1;
                    cout<<s1;
                    break;
            case 3: cout<<s1;
                    break;
            case 4: cout<<"\nprogram exited \n";
                    break;
            default: cout<<"\ninvalid input\n";
        }
    }while(ch!=4);
    return 0;
}