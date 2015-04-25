/*
 * data.h
 *
 *  Created on: Apr 25, 2015
 *      Author: james
 */

#ifndef DATA_H_
#define DATA_H_
#include <iostream>
using namespace std;

class Data{
	char name[20];
	char address[30];
	char city[15];
	long zip;
public:
	friend istream& operator>>(istream &is, Data &d);
	friend ostream& operator<<(ostream &os, const Data &d);
};

int Menu();


#endif /* DATA_H_ */
