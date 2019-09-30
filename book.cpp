/*Define a class BOOK with the following specifications :
Private members of the class BOOK are
BOOK NO               integer type
BOOKTITLE             20 characters
PRICE                 float (price per copy)
TOTAL_COST()        A function to calculate the total cost for N number of copies where N is passed to the function as argument. 
Public members of the class BOOK are
INPUT()                   function to read BOOK_NO. BOOKTITLE, PRICE
PURCHASE()            function to ask the user to input the number of copies to be purchased. It invokes TOTAL_COST() and prints the total cost to be paid by the user. 
Note : You are also required to give detailed function definitions.  */
#include<iostream>
using namespace std;
class BOOK
{
	int BOOKNO;
	char BOOKTITLE[20];
	float PRICE;
	float TOTAL_COST(int n)
	{
		return (float)PRICE*n;
	}
	public:
		void INPUT()
		{
			cout<<"Enter Book number:(Integer Form)\t\t\t";
			cin>>BOOKNO;
			cout<<"Enter the Book Title:(Characters)\t\t\t";
			cin>>BOOKTITLE;
			cout<<"Enter the price of The Book:(Bucks)\t\t\t";
			cin>>PRICE;
		}
		void PURCHASE()
		{
			int n;
			cout<<"Input the no.of copies to be purchased:\t\t";
			cin>>n;
			float cost=TOTAL_COST(n);
			cout<<"BILL:\t\t\t\t\t\t"<<cost<<"Bucks"<<endl;
			cout<<"----------------------------------------------"<<endl;
		}
};
int main()
{
	cout<<"Enter the number of Books To Be Purchased:";
	int n;
	cin>>n;
	cout<<"----------------------------------------------------"<<endl;
	for(int i=0;i<n;i++)
	{
		BOOK bi;
		bi.INPUT();
		bi.PURCHASE();
		cout<<endl;
	}
	return 0;
}
