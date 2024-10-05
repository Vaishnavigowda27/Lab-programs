/*Write a c++ program to create a template function for a Quick Sort and demonstrate the sorting techniques
of integers,doubles and character datatype*/

#include<iostream>
using namespace std;
template <class t>
int vswap(t &x, t &y)
{
  t temp;
  temp=x;
  x=y;
  y=temp;
}
template <class t1>
int quick(t1 a[],int low,int high)
{
  t1 key;
  int i,j,flag;
  flag=0;
  if(low<high)
  {
    key=a[low];
    i=low+1;
    j=high;
    while(!flag)
    {
      while((a[i]<=key)&&(i<high))
      i++;
      while(a[j]>key)
      j--;
      if(i<j)
      swap(a[i],a[j]);
      else 
      flag=1;
    }
    vswap(a[low],a[j]);
    quick(a,low,high-1);
    quick(a,low+1,high);
  }
  return 0;
}
int main(){
  int i,j,num,a[30],choice;
  double b[30];
  do {
    cout<<"MENU:";
    cout<<"1.Integer\n\t2.Double\n\t3.Exit\n";
    cout<<"Enter your choice";
    cin>>choice;
    switch(choice){
      case 1:cout<<"Enter how many elements are there in integer array:";
      cin>>num;
      cout<<"Enter integer number";
      for(int i=0;i<num;i++)
      cin>>a[i];
      quick(a,0,num-1);
      cout<<"\nThe sorted list is:";
      for(i=0;i<num;i++)
      cout<<a[i]<<"\t";
      break;
      case 2:cout<<"Enter how many elements are there in integer array:";
      cin>>num;
      cout<<"Enter floating point number";
      for(int i=0;i<num;i++)
      cin>>b[i];
      quick(b,0,num-1);
      cout<<"\nThe sorted list is:";
      for(i=0;i<num;i++)
      cout<<b[i]<<"\t";
      break;
      default:cout<<"Thank You!";
      break;
    }
  }
  while(choice!=3);
}