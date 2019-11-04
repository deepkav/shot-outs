/*
	C++ PROGRAM FOR SIMULATING RAILWAY TICKETING PROCESS
*/
#include<iostream>
using namespace std;
class train
{
	public:
		int seat_avail,fare;
		char Train_name[];
		double Train_no;
		void get_details()
		{
			cout<<"Enter the Name of Train";
			cin>>Train_name;
			cout<<"Enter the Train number";
			cin>>Train_no;
		}

};
class general:public train
{
	public:
	char coach_no[2];
	int seat_no;
	void get_details()
	{
		cout<<"Enter the Name of Train";
		cin>>Train_name;
		cout<<"Enter the Train number";
		cin>>Train_no;
		cout<<"Enter The coach Number:";
		cin>>coach_no;
		cout<<"Enter the capacity of coach:";
		cin>>seat_avail;
		cout<<"Enter Berth Number:";
		cin>>seat_no;
		cout<<"Enter the fare";
		cin>>fare;
	}
	void print_details()
	{
		cout<<"\nTrain Name:"<<Train_name;
		cout<<"\nTrain Number:"<<Train_no;
		cout<<"\nCoach Number:"<<coach_no;
		cout<<"\nSeat Availability:"<<seat_avail;
		cout<<"\nBerth Number:"<<seat_no;
		cout<<"\nFare of Ticket:"<<fare;
	}
};
class First_class:public train
{
	public:
	char coach_no[2];
	int seat_no;
	void get_details()
	{
		cout<<"Enter the Name of Train";
		cin>>Train_name;
		cout<<"Enter the Train number";
		cin>>Train_no;
		cout<<"Enter The coach Number:";
		cin>>coach_no;
		cout<<"Enter the capacity of coach:";
		cin>>seat_avail;
		cout<<"Enter Berth Number:";
		cin>>seat_no;
		cout<<"Enter the fare";
		cin>>fare;
	}
	void print_details()
	{
		cout<<"\nTrain Name:"<<Train_name;
		cout<<"\nTrain Number:"<<Train_no;
		cout<<"\nCoach Number:"<<coach_no;
		cout<<"\nSeat Availability:"<<seat_avail;
		cout<<"\nBerth Number:"<<seat_no;
		cout<<"\nFare of Ticket:"<<fare;
	}
};
class Ac_Coach:public train
{
	public:
	char coach_no[2];
	int seat_no;
	void get_details()
	{
		cout<<"Enter the Name of Train";
		cin>>Train_name;
		cout<<"Enter the Train number";
		cin>>Train_no;
		cout<<"Enter The coach Number:";
		cin>>coach_no;
		cout<<"Enter the capacity of coach:";
		cin>>seat_avail;
		cout<<"Enter Berth Number:";
		cin>>seat_no;
		cout<<"Enter the fare";
		cin>>fare;
	}
	void print_details()
	{
		cout<<"\nTrain Name:"<<Train_name;
		cout<<"\nTrain Number:"<<Train_no;
		cout<<"\nCoach Number:"<<coach_no;
		cout<<"\nSeat Availability:"<<seat_avail;
		cout<<"\nBerth Number:"<<seat_no;
		cout<<"\nFare of Ticket:"<<fare;
	}
};
int main()
{
	cout<<"Enter your option";
	cout<<"\n1.General";
	cout<<"\n2.First class";
	cout<<"\n3.AC Coach";
	int op;
	cout<<"\nOPtion? is:";
	cin>>op;
	switch(op)
	{
		case 1:
			train t;
			general g;
			g.get_details();
			g.print_details();
			break;
		case 2:
			train t1;
			First_class f;
			f.get_details();
			f.print_details();
			break;
		case 3:
			train t2;
			Ac_Coach a;
			a.get_details();
			a.print_details();
			break;
		default:
			cout<<"Enter Valid Option";
	}
}	
