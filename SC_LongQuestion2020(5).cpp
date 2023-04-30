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
				cout<<"Enter Price : ";
				cin>>price;
			}
			void putdata()
			{
				cout<<"The Title is : "<<title<<endl;
				cout<<"\nThe Price is : "<<price<<endl;
			}
		
};
class Book : public publication{
	private :
		int pagecount;
		public :
			void getdata(){
				publication::getdata();
				cout<<"Enter Pages of The Book : ";
				cin>>pagecount;
			}
			void putdata()
			{
				publication::putdata();
				cout<<"\nThe Pages are : "<<pagecount<<endl;
			}
	
};
class Tape : public publication{
	private:
		float playtime;
		public :
			void getdata(){
				publication::getdata();
				cout<<"Enter PlayTime of Audio is : "<<endl;
				cin>>playtime;
			}
			void putdata()
			{
				publication::putdata();
				cout<<"\nThe PlayTime of Audio: "<<playtime;
			}
		
};
main()
{
	Book b;
	cout<<"For Book"<<endl;
	b.getdata();
	b.putdata();
	Tape t;
	cout<<"For Tape"<<endl;
	t.getdata();
	t.putdata();
	
}
