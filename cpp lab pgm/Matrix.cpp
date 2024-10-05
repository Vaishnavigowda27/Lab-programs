#include<iostream>
using namespace std;
class MATRIX {
  int row,column,a[10][10];
  public:
          MATRIX(int r,int c){
          row=r;
          column=c;
          }

          void getmatrix();
          int operator==(MATRIX);
          MATRIX operator+(MATRIX);
          MATRIX operator-(MATRIX);
          friend ostream& operator<<(ostream&, MATRIX&);
   };
   
   void MATRIX::getmatrix(){
    for(int i=0;i<row;i++)
    for(int j=0;j<column;j++){
      cout<<"["<<i<<";"<<j<<"]:";
      cin>>a[i][j];
    }
   }
   
   int MATRIX::operator==(MATRIX m1){
    if((m1.row==row)&&(m1.column==column))
    return(1);
    else
    return(0);
   }
   
 MATRIX MATRIX::operator+(MATRIX m1){
  MATRIX m2(row,column);
  for(int i=0;i<row;i++)
  for(int j=0;j<column;j++)
  m2.a[i][j]=a[i][j]+m1.a[i][j];
  return m2;
}

MATRIX MATRIX::operator-(MATRIX m1){
MATRIX m2(row,column);
  for(int i=0;i<row;i++)
  for(int j=0;j<column;j++)
  m2.a[i][j]=a[i][j]-m1.a[i][j];
  return m2;
}

ostream& operator<<(ostream& print, MATRIX &res){
  for(int i=0;i<res.row;i++){
    for(int j=0;j<res.column;j++)
    cout<<res.a[i][j]<<" ";
    cout<<endl;
  }
  return print;
}

int main() {
  int m,n,p,q;
  cout<<"Enter the order of first matrix:";
  cin>>m>>n;
  MATRIX m1(m,n);
  cout<<"Enter the order of second matrix:";
  cin>>p>>q;
  MATRIX m2(p,q);
  if(m1==m2){
    cout<<"Enter elements of first matrix:";
    m1.getmatrix();
    cout<<"Enter elements of second matrix:";
    m2.getmatrix();
    MATRIX m3(m,n),m4(m,n);
    m3=m1+m2;
    m4=m1-m2;
    cout<<m1<<"+\n"<<m2<<"=\n"<<m3<<endl;
    cout<<m1<<"-\n"<<m2<<"=\n"<<m4;
      }
      else 
      cout<<"\nError";
      return 0;
  }

