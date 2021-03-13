#include<iostream>
using namespace std;
class Demo1
{
        public:
              int imarks;
              int English;
              int Scince;
              int Mathematics;
              int i;

        int marks()
        {
              cout<<"Enter Marks:"<<"\n";
              cin>>imarks;
              if(imarks>75)
              {
                cout<<"Distinction"<<endl;
              }
              else if(imarks>35 && imarks<75)
              {
                cout<<"First Class"<<endl;
              }
              else
              {
                cout<<"Fail"<<endl;
              }
        }
      int Average()
      {
              cout<<"Enter marks for three subject to calculate there Average"<<endl;

              cout<<"English";
              cin>>English;

              cout<<"Scince";
              cin>>Scince;

              cout<<"Mathematics";
              cin>>Mathematics;

              cout<<"Average is"<<(English+Scince+Mathematics)/3<<endl;
      }
};

class Demo2
{
          public:
                int i;
          Demo2()
          {
                cout<<"Inside Constructor"<<"\n";
          }
          Demo2(int i)
          {
                cout<<i<<"\n";
                cout<<"Inside Parameterised Constructor"<<"\n";

          }

          ~Demo2()
          {
                cout<<"Inside Distructor\n";
      }
};
class Demo3
{
          public:
                int i;
          Demo3()
          {
                 cout<<"Inside Constructor"<<"\n";
          }
          Demo3(int i)
          {
            
                 cout<<i<<"\n";
                 cout<<"Inside Parameterised Constructor"<<"\n";

          }

          ~Demo3()
          {
                 cout<<"Inside Distructor\n";
          }

};

int main()
{
          Demo1 obj1;
          Demo2 obj2;
          Demo3 obj3;

          obj1.marks();
          obj1.Average();

          Demo2 obj4();
          Demo2 obj5(30);

          Demo3 obj6();
          Demo3 obj7(35);

return 0;		
}




