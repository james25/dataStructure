/*
 * mail.h
 *
 *  Created on: Apr 25, 2015
 *      Author: james
 */

#ifndef MAIL_H_
#define MAIL_H_

#include "data.h"

class Mail
{
protected:
	Data sender;
	Data addressee;
	static double postage;//static wrong on mac
public:
	friend istream& operator>>(istream &is, Mail &m);
	friend istream& operator>>(istream &is, Mail *m);
	friend ostream& operator<<(ostream &os, Mail &m);//for test
	friend ostream& operator<<(ostream &os, Mail *m);
	virtual double calculatePostage();
	//void calculatePostage();
	virtual void seePostage();
	//virtual ~Mail(){} // with virtual destructor the class can't be deleted
};



#endif /* MAIL_H_ */
