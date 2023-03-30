//Past Paper 2020 long Question
#include<iostream>
using namespace std;
class Date{
	private:
		int day,month,year;
		public:
			Date():day(31),month(12),year(2023)		//Default Constructor
			{
			}
			
			Date(int d,int m,int y):day(d),month(m),year(y)		//Parametrized Constructor
			{
			}
			
			void getDate(){
				char ch ;
				cout<<"Enter The Date in DD/MM/YYYY Format : ";
				cin>>day>>ch>>month>>year;
			}
			
			Date operator +(Date obj)
			{
				Date temp;
				temp.day = day+obj.day;
				temp.month = month+obj.month;
				temp.year = year+obj.year;
				return temp;
			}
			void operator >(Date obj1)
			{
				if(obj1.year>year)
				{
					cout<<obj1.year<<" is greater";
				}
				else if(year>obj1.year)
				{
					cout<<year<<" is greater ";
				}
			}
};

main()
{
	Date d1,d2,d3;
	d2.getDate();
	d3.getDate();
	d1 = d2+d3;
	d1>d2;
}