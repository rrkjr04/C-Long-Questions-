//Past Paper 2020 long Question

#include<iostream>
using namespace std;
class Date{
	private:
		int day,month,year;
		public:
			Date():day(29),month(5),year(2023)		//Default Constructor
			{ 
				// OOP Paper Date 
			}
			
			Date(int d,int m,int y):day(d),month(m),year(y)		//Parametrized Constructor
			{
				
			}
			
			void getDate(){
				char ch ;
				cout<<"Enter The Date in DD/MM/YYYY Format : ";
				cin>>day>>ch>>month>>ch>>year;
			}
			void show()
			{
				cout<<"Day is : "<<day<<" Month is : "<<month<<" Year is : "<<year<<endl;
			}
			
			Date operator +(Date &obj)
			{
				Date temp;
				temp.day = day+obj.day;
				temp.month = month+obj.month;
				temp.year = year+obj.year;
				return temp;
			}
			void operator >(Date &obj1)
			{
				if(obj1.year>year)
				{
					cout<<"Date d1 is greater than from d2";
				}
				else if(year>obj1.year)
				{
					cout<<"Date d2 is greater than from d1";
				}
			}
};

main()
{
	Date d1,d2,d3;
	cout<<"Enter Date for d2"<<endl;
	d2.getDate();
	cout<<"Enter Date for d3"<<endl;
	d3.getDate();
	cout<<"Date is Added in d1: ";
	d1 = d2+d3;
	d1.show();
	cout<<"Check Date is Greater than d1>d2 "<<endl;
	d1>d2;
}
