//Past Paper 2018 Second Last Long Qusetion

#include<iostream>
using namespace std;
float num;
class Time{
	private:
		int hour,minute,seconds;
			
		public:
			Time():hour(0),minute(0),seconds(0)		//Default Constructor
			{
			}
			
			Time(int h,int m,int s):hour(h),minute(m),seconds(s)		//Overloaded Constructor
			{
			}
			Time(Time &obj)		//Copy Construtor
			{
				hour = obj.hour;
				minute = obj.minute;
				seconds = obj.seconds;
			}
			~Time()		//Destructor
			{
				
			}
			
			void set()		//setter Function
			{
				cout<<"Enter Hours : ";
				cin>>hour;
				cout<<"\nEnter Minutes : ";
				cin>>minute;
				cout<<"\nEnter Seconds : ";
				cin>>seconds;
			}
			void get()		//Getter Functiom
			{
				cout<<"\nHours : "<<hour;
				cout<<"\nMinutes : "<<minute;
				cout<<"\nSeconds : "<<seconds;
			}
			
			Time operator -(Time obj)		//Overloaded (-)operator
			{
				Time temp;
				temp.hour = hour-obj.hour;
				temp.minute = minute-obj.minute;
				temp.seconds = seconds-obj.seconds;
				
				return temp;
			}
			
			void operator *(float n)		//Overloaded (*)operator
			{
				cout<<"The Time after Multiply is \n"<<hour*n<<" / "<<minute*n<<" / "<<seconds*n;
			}
};
main()
{
	Time obj1,obj2,obj3;
	
	cout<<"\nEnter Time for 1st Object"<<endl;
	obj1.set();
	obj1.get();
	
	cout<<"\n\nEnter Time for 2nd Object"<<endl;
	obj2.set();
	obj2.get();
	obj3 = obj1-obj2;
	cout<<"\nAfter the Time is Subtract"<<endl;
	obj3.get();
		
	cout<<"\nEnter The Number You want to multiply Time : ";
	cin>>num;
	obj3*num;
}
