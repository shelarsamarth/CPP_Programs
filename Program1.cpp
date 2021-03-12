#include<iostream>
using namespace std;

class ArithmeticOperations
{
      public:
            int var1=0;					//characteristics
            int var2=0;
            int var3=0;
            int var4=0;
            int var5=0;
            int iResult=0;

		

	    void Addition()						//behaviour
      {
            cout<<"Enter Values:"<<endl;
            cin>>var1;
            cin>>var2;
            cin>>var3;
            iResult=var1+var2+var3;
            cout<<"Addition is:"<<iResult<<"\n";
      }
      void Substraction()						//behaviour
      {
             cout<<"Enter Values:"<<endl;
             cin>>var1;
             cin>>var2;
             cin>>var3;
             iResult=var1-var2-var3;
             cout<<"Substraction"<<iResult<<"\n";
      }
      void Multiplication()						//behaviour
      {
              cout<<"Enter Values:"<<endl;
              cin>>var4;
              cin>>var5;
              cin>>var3;
              iResult=var4*var5*var3;
              cout<<"Multiplication"<<iResult<<"\n";
      }

};

int main()
{
              ArithmeticOperations Addition1;	
              ArithmeticOperations Substraction1;
              ArithmeticOperations Multiplication1;
                            //object creation
              Addition1.Addition();
              Substraction1.Substraction();
              Multiplication1.Multiplication();				//behaviour call
              return 0;

}
