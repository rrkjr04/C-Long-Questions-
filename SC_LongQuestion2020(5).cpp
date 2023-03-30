//Past Paper Long Question 2020
#include<iostream>
#include<string.h>
using namespace std;
class publication{
	private:
		string title;
		float price;
		public :
			void getdata(){
				cout<<"Enter the Title : ";
				cin>>title;
				cout<<"Enter Price : "<<endl;
				cin>>price;
			}
			void putdata()
			{
				cout<<"The Title is : "<<title;
				cout<<"\nThe Price is : "<<price;
			}
		
};
class Book : public publication{
	private :
		int pagecount;
		public :
			void getdata(){
				publication::getdata();
				cout<<"Enter Pages of The Book : "<<endl;
				cin>>pagecount;
			}
			void putdata()
			{
				publication::putdata();
				cout<<"\nThe Pages are : "<<pagecount;
			}
	
};
class Tape : public publication{
	private:
		float playtime;
		public :
			void getdata(){
				publication::getdata();
				cout<<"Enter PlayTime : "<<endl;
				cin>>playtime;
			}
			void putdata()
			{
				publication::putdata();
				cout<<"\nThe PlayTime is : "<<playtime;
			}
		
};
main()
{
	Book b;
	b.getdata();
	b.putdata();
	Tape t;
	t.getdata();
	t.putdata();
	
}