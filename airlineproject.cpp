#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<unistd.h>
#include<iomanip>
#include<string.h>
#include<ctime>
using namespace std;
class A{
string des[14]={"LONDON","DELHI","DHAKA","BERLIN","DUBAI","NEW YORK","BEIJING","PARIS","CAPE TOWN","TOKYO","LOS ANGELES","MUMBAI","JAIPUR","SRINAGAR"};
string dep[14]={"LONDON","DELHI","DHAKA","BERLIN","DUBAI","NEW YORK","BEIJING","PARIS","CAPE TOWN","TOKYO","LOS ANGELES","MUMBAI","JAIPUR","SRINAGAR"};
string fname,lname,date,dpst,dsst;
int i,age,check1,check2,t,fare=10000;
string ad;
public :
	int available(){
	cout<<"\n\nFlowing depart and destination stations are avaliable :- \n\n"<<endl;
	for(int i=0;i<14;i++){
		cout<<dep[i]<<endl;
		}
	cout<<endl<<"Enter 1 For back to main menu or 0 to exit :- "<<endl;
	cin>>i;
	return i;
	}
	int book(){
	cout<<"\n\nFlowing depart and destination stations are avaliable :- \n\n"<<endl;
	for(int i=0;i<14;i++){
		cout<<dep[i]<<endl;
		}
		getdetails();
		system("CLS");
		check1=checkdep();
		check2=checkdes();
		if(check1==0||check2==0){
			system("CLS");
			cout<<"|________________________________________"<<endl;
			cout<<"|SORRY NO FLIGHT AVAILABLE FOR THIS ROUTE ";
			cout<<"|________________________________________"<<endl;
		}
		else{
			system("CLS");
			printticket();
		}
		return i;
	}
	void getdetails(){
		cout<<"\nEnter your first name :- \n";
		cin>>fname;
		cout<<"\nEnter your last name :- \n";
		cin>>lname;
		cout<<"\nEnter your current age :- \n";
		cin>>age;
		cout<<"\nEnter your Current Adress :-\n";
		cin>>ad;
		cout<<"\nEnter the date which you want to book ticket :- \n";
		cin>>date;
		cout<<"\nEnter the departing station[IN CAPITAL LETTERS]:- \n";
		cin>>dpst;
		cout<<"\nEnter the destionation station[IN CAPITAL LETTERS]:- \n";
		cin>>dsst;
		cout<<"\nON WHICH TIME YOU WANT TO TRAVEL "<<endl;
		cout<<"Enter the flight time in 24 hours format :- \n";
		cin>>t;
		if(t>24){
			cout<<"Wrong time entered Now time will be Automatically allocated by system or press 0 to cancel at the end of the ticket"<<endl;
			t=12;
		}

	}
	int checkdep(){
		int p=0;
		for(int i=0;i<14;i++){
			if(dep[i]==dpst){
				p=1;
			}
		}
		return p;
	}
	int checkdes(){
		int p=0;
		for(int i=0;i<14;i++){
			if(des[i]==dsst){
				p=1;
			}
		}
		return p;
	}
	void printticket(){
		time_t now = time(0);
		char* dt = ctime(&now);
		tm *gmtm = gmtime(&now);
    	dt = asctime(gmtm);
		system("CLS");
		cout<<"\t\t\t\tYour E-Ticket is :"<<endl;
		cout<<"\t\t\t\tAIRLINE TICKET"<<endl;
    	cout<<"|Ticket No.1"<<endl;
		cout<<"|"<<endl;
		cout<<"|Ticket Booking data and time is "<<dt;
		cout<<"|"<<endl;
		cout<<"|_______________________________________________________________"<<endl;
    	cout<<"|Resevation No. : 176 2175501628"<<endl;
    	cout<<"|_______________________________________________________________"<<endl;
		cout<<"|"<<endl;
    	cout<<"|Passenger Data :"<<endl;
    	cout<<"|"<<endl;
    	cout<<"|Passenger Name :"<<fname<<" "<<lname<<endl;
    	cout<<"|"<<endl;
		cout<<"|Passenger Age : "<<age<<endl;
    	cout<<"|"<<endl;
		cout<<"|Passenger Adress : "<<ad<<endl;
    	cout<<"|"<<endl;
    	cout<<"|_______________________________________________________________"<<endl;
    	cout<<"|"<<endl;
    	cout<<"|Flight Details :"<<endl;
    	cout<<"|"<<endl;
    	cout<<"|EMIRATES EK 345"<<endl;
    	cout<<"|"<<endl;
    	cout<<"|Flight Depart Time : "<<t<<":00:00"<<endl;
    	cout<<"|"<<endl;
    	cout<<"|Flight Arrive Time : "<<t+4<<":00:00"<<endl;
    	cout<<"|"<<endl;
    	cout<<"|Flight Date For Travel : "<<date<<endl;
    	cout<<"|"<<endl;    	
		cout<<"|_______________________________________________________________"<<endl;
    	cout<<"|"<<endl;
    	cout<<"|Depart Station :"<<dpst<<endl;
    	cout<<"|"<<endl;
    	cout<<"|Destination Station :"<<dsst<<endl;
    	cout<<"|"<<endl;
    	cout<<"|_______________________________________________________________"<<endl;
    	cout<<"|"<<endl;
		cout<<"|Fare : "<<fare<<endl;
    	cout<<"|"<<endl;
    	cout<<"|_______________________________________________________________"<<endl;
    	cout<<"|"<<endl;
    	cout<<"|*BAG allowed UPTO 50 KG"<<endl;
	    cout<<"|"<<endl;
    	cout<<"|*For more detail Please Visit www.emirates.com"<<endl;
    	cout<<"|"<<endl;
    	cout<<"|_______________________________________________________________"<<endl;
		cout<<endl<<"Enter 1 For back to main menu or 0 to exit :- "<<endl;
		cin>>i;
	}
};
int main(){
	system("color 2f");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t*********************************************************\n\t\t\t\t\t*\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t*\n";
    cout<<"\t\t\t\t\t*\tWELCOME TO AIRLINE RESERVATION SYSTEM\t\t*\n";
    cout<<"\t\t\t\t\t*\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t*\n";
    cout<<"\t\t\t\t\t*********************************************************\n";
	sleep(5);
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t*********************************************************\n\t\t\t\t\t*\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t*\n";
    cout<<"\t\t\t\t\t*\t\tDEVELOPED BY AARISH QUAZI\t\t*\n";
    cout<<"\t\t\t\t\t*\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t*\n";
    cout<<"\t\t\t\t\t*********************************************************\n";
	sleep(5);
	system("cls");
	int ch;
	int c=1;
	A obj;
	do{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t*********************************************************\n\t\t\t\t\t*\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t*\n";
    cout<<"\t\t\t\t\t*\t\tEMIRATES AIRLINE RESERVATION SYSTEM\t*\n";
    cout<<"\t\t\t\t\t*\t\t\tMAIN MENU\t\t\t*\n";
    cout<<"\t\t\t\t\t*\t\tENTER YOUR CHOICE\t\t\t*\n";
    cout<<"\t\t\t\t\t*\t\tPRESS 1. FOR FLIGHT BOOKING\t\t*\n";
    cout<<"\t\t\t\t\t*\t\tPRESS 2. FOR SEARCH FLIGHTS\t\t*\n";
    cout<<"\t\t\t\t\t*\t\tENTER YOUT CHOICE :- \t\t\t*\n";
    cout<<"\t\t\t\t\t*\t\t\t\t\t\t\t*\n\t\t\t\t\t*\t\t\t\t\t\t\t*\n";
    cout<<"\t\t\t\t\t*********************************************************\n";
    cout<<"\t\t\t\t\t";
    cin>>ch;
	sleep(5);
	system("cls");
	switch(ch){
    	case 1 :
    	c=obj.book();
		cout<<c;
    	break;
    	case 2 :
		c=obj.available();
    	break;
    	default :
		cout<<"|________________________________________"<<endl;
    	cout<<"|Wrong number is Entered "<<endl;
		cout<<"|________________________________________"<<endl;    	
		sleep(5);
    	break;
	}
	}while(c==1);
	return 0;
}