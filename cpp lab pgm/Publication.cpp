#include<iostream>
using namespace std;
class publication {
  public: 
          string title;
          publication(){
          title="IEEEOOP";
          }
          void print(){
            cout<<"TITLE: "<<title<<endl;
          }
};

class book:public publication {
  public:
          float an;
          book(){
          an=683.12;
          }
          void print(){
            
            cout<<"Accession number: "<<an<<endl;
          }
};

class magazine:public publication {
  public:
         int vol;
         magazine(){
         vol=1;
         }
         void print(){
          
          cout<<"Volume: "<<vol<<endl;
         }
};

class journal:public book, magazine {
  public:
         void print(){
          book::print();
          magazine::print();
         }
};
          int main(){
            journal IEEEOOP;
            IEEEOOP.print();
            return 0;
          }