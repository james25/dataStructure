/*
 * priorityMail.cpp
 *
 *  Created on: Apr 25, 2015
 *      Author: james
 */


#include "priorityMail.h"

//-----------------------------PriorityMail Class------------------------------------//

PriorityMail::PriorityMail(Zone z, double w, bool urg):urgent(urg),area(z),weight(w){
	 price = 0;
};

istream& operator>>(istream &is, Zone &z){
	// succeed
	string input;
	is>>input;
	if(input == "national"){
		z = Zone(0);
	}else if(input == "international"){
		z = Zone(1);
	}else if(input == "0"){
		z = Zone(0);
	}else if(input == "1"){
		z = Zone(1);
	}else{
		throw out_of_range("Invalid value for type Zone");
	}
	return is;
}

void PriorityMail::seePostage(){
	cout<<"Information about this priority mail is:"<<endl;
	cout<<"Addressee:"<<endl;
	cout<<this->addressee;
	cout<<"Sender:"<<endl;
	cout<<this->sender;
	this->calculatePostage();
	cout<<"Postage:"<<this->price<<endl;
}


istream& operator>>(istream &is, PriorityMail &p){
	cout<<"urgent(1/0) ?";
	is>>p.urgent;
	cout<<"Weight:?"<<endl;
	is>>p.weight;
	cout<<"Zone(national/international):?"<<endl;
	is>>p.area;
	cout<<"Addressee:"<<endl;
	is>>p.addressee;
	cout<<"Sender:"<<endl;
	is>>p.sender;
	return is;
}

istream& operator>>(istream &is, PriorityMail *p){

	cout<<"urgent(1/0) ?";
	is>>p->urgent;
	cout<<"Weight:?"<<endl;
	is>>p->weight;
	cout<<"Zone(national/international):?"<<endl;

	is>>p->area;
	cout<<"Addressee:"<<endl;
	is>>p->addressee;
	cout<<"Sender:"<<endl;
	is>>p->sender;
	return is;
}

ostream& operator<<(ostream &os, PriorityMail *p){
	os<<"urgent:";
	os<<p->urgent<<endl;
	os<<"Weight:";
	os<<p->weight<<endl;
	os<<"Zone(national/international):";
	os<<p->area<<endl;
	os<<"Addressee:";
	os<<p->addressee<<endl;
	os<<"Sender:";
	os<<p->sender<<endl;
	return os;
}

double PriorityMail::calculatePostage(){

	if(area == 0){
	// National
		switch (urgent){
			case 1:
			//urgent
				if(weight < 1){
					price = 9;
				}else if(weight >= 1){
					price = 10*weight;
				}
			break;

			case 0:
			//no urgent
				if(weight < 1){
					price = 5;
				}else if(weight >= 1){
					price = 6*weight;
				}
			break;
			default:
				throw out_of_range("urgent value must be 0/1");

		}

	}else if(area == 1){
		// international
		switch (urgent){
			case 1:
			//urgent
				if(weight < 1){
					price = 15;
				}else if(weight >= 1){
					price = 16*weight;
				}
			break;

			case 0:
			//no urgent
				if(weight < 1){
					price = 8;
				}else if(weight >= 1){
					price = 8.5*weight;
				}
				break;
			default:
				throw out_of_range("urgent value must be 0/1");

		}

	}

	return price;

}

//-----------------------------PriorityMail Class End-------------------------------//

