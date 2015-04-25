/*
 * data.cpp
 *
 *  Created on: Apr 25, 2015
 *      Author: james
 */

#include "data.h"
istream& operator>>(istream &is, Data & d){
    is.ignore(100,'\n');
	cout<<"Name: ?";
	is.getline(d.name,20);
	cout<<endl<<"Address ?";
	is.getline(d.address,30);
	cout<<endl<<"City:?";
	is.getline(d.city,15);
	cout<<endl<<"ZIP Code:?";
	is>>d.zip;
	cout<<endl;
	return is;
}

ostream& operator<<(ostream &os, const Data & d){
	os<<"Name : "<<d.name<<endl;
	os<<"Address: "<<d.address<<endl;
	os<<"City: "<<d.city<<endl;
	os<<"Zip Code: "<<d.zip<<endl;
	return os;
}

int Menu(){
	int ret;
	cout<< "Enter an option:"<<endl;
	cout<<"\t(1) Introduce First mail"<<endl;
	cout<<"\t(2) Introduce Priority mail"<<endl;
	cout<<"\t(3) Print all mail information"<<endl;
	cout<<"\t(4) Exit"<<endl;
	cin>>ret;
	return ret;
}
