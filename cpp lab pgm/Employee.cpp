/*Given that an EMPLOYEE class contains following members:
Data members:Employee_Number, Employee_Name,Basic,DA,IT,Net_Sal Member functions:to read the data,to calculate 
Net_Sal and to print data members.Write a C++ pgm to read the data of N employees and compute Net_Sal of 
each Employee*/

#include<iostream>
using namespace std;
#define size 25

class employee {
  char emp_num[10],emp_name[25];
  float basic,da,it,net_sal;

public: int getdata();
        int netsal();
        int display();
  };

  int employee::getdata()
  {
    cout<<"\nEnter employee number:";
    cin>>emp_num;
    cout<<"\nEnter employee name:";
    cin>>emp_name;
    cout<<"\nEnter basic salary:";
    cin>>basic;
  } 
   
   int employee::netsal()
   {
    da=(.52*basic);
    float gsal=basic+da;
    it=(.30*gsal);
    net_sal=gsal-it;
   }

   int employee::display()
   {
    cout<<"\n\nEmployee number:"<<emp_num<<"\nEmployee name:"<<emp_name<<"\nNet sal:"<<net_sal<<endl;
   }

   int main() {
    employee obj[size];
    int n;
    cout<<"Enter number of employees\n";
    cin>>n;
    for(int i=0;i<n;i++){
    obj[i].getdata();
    obj[i].netsal();
    }
    for(int i=0;i<n;i++){
    obj[i].display();
    }
  }