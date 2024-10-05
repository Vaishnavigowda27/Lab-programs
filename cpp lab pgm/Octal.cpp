#include<iostream>
#include<math.h>
using namespace std;
class octal{
  int oct[15],count;
public:
       octal(int);
       int operator+(int);
      friend ostream& operator<<(ostream &,octal);
};

   octal:: octal(int x){
     int a[15],i=0,rem;
     while(x!=0){
      rem=x%8;
      x=x/8;
      a[i++]=rem;
     }
     count=i;
     int n=count-1;
     for(int i=0;i<count;i++){
      oct[i]=a[n];
      n--;
     }
}


int octal::operator+(int k){
int i,j=count-1,x;
for(int i=0;i<count;i++){
  int x=x+oct[j]*pow(8,i);
  j--;
}
return(x+k);
}


  ostream& operator<<(ostream& print,octal o){
  for(int i=0;i<o.count;i++){
    cout<<o.oct[i];
  }
  return print;
}


int main(){
int x,y=0,k;
cout<<"Enter the integer value: ";
cin>>x;
octal h=octal(x);
cout<<"Corresponding octal value"<<x<<":is\n"<<h;
cout<<"\nEnter the integer to be added :";
cin>>k;
 y=h+k;
cout<<"\t"<<h<<"(octal)+"<<"\t"<<k<<"(decimal)="<<y<<"(decimal)";
return 0;
}

