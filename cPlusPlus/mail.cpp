/*
 * mail.cpp
 *
 *  Created on: Apr 25, 2015
 *      Author: james
 */
#include "mail.h"
istream& operator>>(istream &is, Mail &m){
	cout<<"Addressee:"<<endl;
	is>>m.addressee;
	cout<<"Sender:"<<endl;
	is>>m.sender;
	return is;
}


istream& operator>>(istream &is, Mail *m){
	cout<<"Addressee:"<<endl;
	is>>m->addressee;
	cout<<"Sender:"<<endl;
	is>>m->sender;
	return is;
}

//----Operators & functions related to Mail Class------//
ostream& operator<<(ostream &os, Mail &m){
	//for test
	cout<<"Addressee:"<<endl;
	cout<<m.addressee;
	cout<<"Sender:"<<endl;
	cout<<m.sender;
	return os;
}

ostream& operator<<(ostream &os, Mail *m){
	//for test
	cout<<"Addressee:"<<endl;
	cout<<m->addressee;
	cout<<"Sender:"<<endl;
	cout<<m->sender;
	return os;
}

double Mail::calculatePostage(){
	static double postage = 0.48; // have to be redefined, isn't any member of object
	return postage;
}



void Mail::seePostage(){
	cout<<"Information about this First Class Mail is:"<<endl;
	cout<<"Sender:"<<endl;
	cout<<this->sender;
	cout<<endl;
	cout<<"Addressee:"<<endl;
	cout<<this->addressee<<endl;
	double price = calculatePostage();
	cout<<"Postage: "<<price<<endl;

}

//----Operators & functions related to Mail Class End--//


