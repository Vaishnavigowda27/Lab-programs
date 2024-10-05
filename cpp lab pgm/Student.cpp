/*Define a STUDENT with USN,Name and Marks in 3 tests of a subject.Declare an array of 10 STUDENT objects.Using
appropriate functions,find the average of two better marks for each student.Print the USN, Name and the average
marks of all the students. */


#include<iostream>
using namespace std;
#define size 25
class student {
  int m1,m2,m3;
  char usn[20],name[20];

  public: void getdata();
          void putdata();
};
void student::getdata()
{
  cout<<"\nUSN:";
  cin>>usn;
  cout<<"\nname:";
  cin>>name;
  cout<<"\nEnter three marks:";
  cin>>m1>>m2>>m3;
}

void student::putdata()
{
int min;
float avg;
min=0;
if((m1<=m2)&&(m1<=m3))
min=m1;
else 
if((m2<=m1)&&(m2<=m3))
min=m2;
else
min=m3;
avg=(float)((m1+m2+m3)-min)/(2.0);
cout<<"usn:"<<usn<<endl<<"name:"<<name<<endl
<<"avg marks"<<avg<<endl;
}

int main()
{
  student obj[size];
  int n,i;
  cout<<"Enter Number of students\n";
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<"enter student\t"<<i<<"data:\n";
    obj[i].getdata();
  }
  cout<<"Student Info:\n";
  for(int i=1;i<=n;i++)
  obj[i].putdata();
  return 0;
}