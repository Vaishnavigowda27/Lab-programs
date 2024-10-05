/*Write a C++ pgm to create a class called COMPLEX and implement the following by overloading the function ADD 
which returns the COMPLEX number
(a)ADD (a,s2)-> where a is an integer (real part) and s2 is a complex number
(b)ADD (s1,s2)->where s1 and s2 are complex numbers
(c)Display the result by overloading the operator<<*/


#include<iostream>
using namespace std;
class complex {
  float real,imag;
  public:
         int getdata(float,float);
         friend complex add(int,complex);
         friend complex add(complex,complex);
         friend ostream &operator<<(ostream&, complex&);
};

int complex::getdata(float n1,float n2)
{
  real=n1;
  imag=n2;
}

ostream &operator<<(ostream& print, complex& comp)
{
  print<<comp.real<<"+i"<<comp.imag;
  return print;
}

complex add(int num,complex s2)
{
complex result;
result.real=num+s2.real;
result.imag=s2.imag;
return(result);
}

complex add(complex s1,complex s2)
{
  complex result;
  result.real=s1.real+s2.real;
  result.imag=s1.imag+s2.imag;
  return(result);
}

int main()
{
  int n1,n2,n3;
  complex c1,c2,c3,c4;
  cout<<"\n Enter real and imag part of first complex number:";
  cin>>n1>>n2;
  c1.getdata(n1,n2);
  cout<<"\n Enter real and imag part of second complex number:";
  cin>>n1>>n2;
  c2.getdata(n1,n2);
  cout<<"\n Enter the integer to be added to first complex number:";
  cin>>n3;
  c3=add(c1,c2);
  c4=add(n3,c1);
  cout<<"\n\nSum of two complex numbers"<<endl<<"\t c1:"<<c1<<endl<<"\t c2:"<<c2<<endl<<endl<<"\t IS:"<<c3<<endl<<
   "\n Sum of integer with complex number is:"<<endl<<"\t c1:"<<c1<<endl<<"\t integer:"<<n3<<endl<<"\t IS:"<<c4<<endl;
   return 0;
}