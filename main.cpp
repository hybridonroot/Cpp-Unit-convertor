/*Author : hybridoitc*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int option;
float bconv,aconv;
cout<<setw(25)<<"MAIN MENU"<<endl;
cout<<"[1]centimeter into inches"<<endl<<"[2]Liters into galons"<<endl<<"[3]kilometer into miles"<<endl<<"[4]kilograms into pounds"<<endl<<"[5]exit"<<endl<<"Please select ";
cin>>option;
switch(option){
case 1:{
   cout<<"Enter distance in centimeters to convert to Inches";
    	cin>>bconv;
    	aconv=bconv*0.39;
    	cout<<bconv<<"centimeter ="<<aconv<<"inches";

		break;
    }
case 2:	
    {
    	cout<<"Enter amount of liquid in liters to convert to Galons";
    	cin>>bconv;
    	aconv=bconv*2.1133;
    	cout<<bconv<<"liters ="<<aconv<<"galons"; 
    	break;
	}
case 3:
{
	cout<<"Enter distance in Kilometers to convert to Miles";
    	cin>>bconv;
    	aconv=bconv*0.621;
    	cout<<bconv<<"kilometer = "<<aconv<<"miles";
	break;
}
case 4:
	{cout<<"Enter quantity In Kilograms to convert to Pounds";
    	cin>>bconv;
    	aconv=bconv*2.204;
    	cout<<bconv<<"kilogrm ="<<aconv<<"pounds";
	}
	break;

case 5:{
	cout <<"exit";
	break;
}
default:
	cout<<"Sorry Incorrect Choice";
}
return 0;
}
