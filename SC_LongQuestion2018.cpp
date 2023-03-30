//Past Paper 2018 Second Last Long Qusetion

#include<iostream>
using namespace std;
float num;
class Time{
	private:
		int hour,minute,second;
			
		public:
			Time():hour(0),minute(0),second(0)		//Default Constructor
			{
			}
			
			Time(int h,int m,int s):hour(h),minute(m),second(s)		//Overloaded Constructor
			{
			}
			Time(Time &obj)		//Copy Construtor
			{
				hour = obj.hour;
				minute = obj.minute;
				second = obj.second;
			}
			~Time()		//Destructor
			{
				
			}
			
			void get()		//Getter Function
			{
				cout<<"Enter Hours : ";
				cin>>hour;
				cout<<"\nEnter Minutes : ";
				cin>>minute;
				cout<<"\nEnter Seconds : ";
				cin>>second;
			}
			void set()		//Setter Functiom
			{
				cout<<"\nHours : "<<hour;
				cout<<"\nMinutes : "<<minute;
				cout<<"\nSeconds : "<<second;
			}
			
			Time operator -(Time obj)		//Overloaded (-)operator
			{
				Time temp;
				temp.hour = hour-obj.hour;
				temp.minute = minute-obj.minute;
				temp.second = second-obj.second;
				
				return temp;
			}
			
			void operator *(float n)		//Overloaded (*)operator
			{
				
				
				cout<<"The Time after Multiply is \n"<<hour*n<<" / "<<minute*n<<" / "<<second*n;
			}
};
main()
{
	Time obj1,obj2,obj3;
	obj1.get();
	obj1.set();
	obj2.get();
	obj2.set();
	obj3 = obj1-obj2;
	obj3.set();
		
	cout<<"\nEnter The Number You want to multiply : ";
	cin>>num;
	obj3*num;
	
	
}
