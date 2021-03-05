#include<iostream>
using namespace std;
int main()
{
	cout<<"Arithematic Operations Program"<<endl;
	cout<<"Enter the operation number to perform respective operation"<<endl;
	cout<<"1-Addition\n"<<"2-Subtraction\n"<<"3-Multiplication\n"<<"4-Division\n"<<"5-Modulo\n";
	int x,y;
	int option_No;
	cin>>option_No;
	switch(option_No)
	{
		case 1:
		cout<<"Addition Operation\n"<<"Enter any two numbers"<<endl;
		cin>>x>>y;
		cout<<"The addition of  "<< x <<" and "<< y <<"  is  "<<(x+y);
		break;	
		
		
		
		case 2:
		cout<<"Subtraction Operation\n"<<"Enter any two numbers"<<endl;
		cin>>x>>y;
		cout<<"The Subtraction of  "<< x <<" and "<< y <<"  is  "<<(x-y);
		break;
		
		case 3:
		cout<<"Multiplication Operation\n"<<"Enter any two numbers"<<endl;
		cin>>x>>y;
		cout<<"The Multiplication of  "<< x <<" and "<< y <<"  is  "<<(x*y);
		break;
		
		case 4:
		cout<<"Division Operation\n"<<"Enter any two numbers"<<endl;
		cin>>x>>y;
		cout<<"The Division of  "<< x <<" and "<< y <<"  is  "<<(x/y);
		break;
		
		case 5:
		cout<<"Modulo Operation\n"<<"Enter any two numbers"<<endl;
		cin>>x>>y;
		cout<<"The Modulo of  "<< x <<" and "<< y <<"  is  "<<(x%y);
		break;
		
		default:
		cout<<"Option No error";	
	
	}
	
	return 0;
	
}
