/* MUHAMMAD HAYYAN
23I-2041___CY-A
Assignment#03____Q2*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
		//Program to flip bits of 5 digit binary number
	int input, output=1, first_d, second_d, third_d, forth_d, fifth_d;
		
		//Taking input
	cout<<"\nEnter 5 digit binary number =  ";
	cin>> input;
	cout<<endl;
	
		//Flipping each digit individually and storing in separate variables
	if ((input%10)==0)
	{
		fifth_d = output * 1;
	}
	else
	{
		fifth_d = output * 0;
	}
	input = input/10;
	
	if ((input%10)==0)
	{
		forth_d = output * 1;
	}
	else
	{
		forth_d = output * 0;
	}
	input = input/10;
	
	if ((input%10)==0)
	{
		third_d = output * 1;
	}
	else
	{
		third_d = output * 0;
	}
	input = input/10;
	
	if ((input%10)==0)
	{
		second_d = output * 1;
	}
	else
	{
		second_d = output * 0;
	}
	input = input/10;
	
	if ((input%10)==0)
	{
		first_d = output * 1;
	}
	else
	{
		first_d = output * 0;
	}
	input = input/10;
	
		
		//Assembling the number
	output = first_d*10 + second_d;
	output = output*10 + third_d;
	output = output*10 + forth_d;
	output = output*10 + fifth_d;
	
	
		//Conditions to print zero if zero comes in start
	if(output > 9999)
	{
	cout<<"Ouput is =  "<<output<<endl;
	}
	else if(output>999)
	{
	cout<<"Output is =   "<<setw(5)<<setfill('0')<<output<<endl;
	}
	else if(output>99)
	{
	cout<<"Output is =   "<<setw(5)<<setfill('0')<<output<<endl;
	}
	else if(output>9)
	{
	cout<<"Output is =   "<<setw(5)<<setfill('0')<<output<<endl;
	}
	else if(output>0)
	{
	cout<<"Output is =   "<<setw(5)<<setfill('0')<<output<<endl;
	}
	else
	{
	cout<<"Output is =   "<<setw(5)<<setfill('0')<<output<<endl;
	}
	
	return 0;
}
	
	
	
	
		
	
