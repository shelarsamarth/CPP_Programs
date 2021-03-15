#include<iostream>
using namespace std;

class Flightdetails
{
          private:
                  int Flightnumber=0;
                  string Destination="NULL";
                  float Distance=0.0;
                  float Fuel=0.0;

                void CALFUEL()
                {
                  if(Distance<=1000)
                  {
                    Fuel=500;
                  }
                  else if(Distance>1000 && Distance<=2000)
                  {
                    Fuel=1100;
                  }
                  else
                  {
                    Fuel=2200;
                  }
}

	public:

          void FEEDINFO()
	        {
                  cout<<"Enter Details\n";
                  cout<<"Enter Flight Number:"<<endl;
                  cin>>Flightnumber;
                  cout<<"Enter Destination:"<<endl;
                  cin>>Destination;
                  cout<<"Enter Distance:"<<endl;
                  cin>>Distance;

	                CALFUEL();
	        }
	
	

	        void SHOWINFO()
	        {
                  cout<<"Details\n";
                  cout<<"Flight Number"<< Flightnumber<<endl;
                  cout<<"Flight Destination"<<Destination<<endl;
                  cout<<"Flight Distance"<< Distance<<endl;
                  cout<<"Required Fuel"<< Fuel<<endl;
	        }
};

int main()
{
                  Flightdetails obj;

                  obj.FEEDINFO();
                  obj.SHOWINFO();

                  return 0;


}
