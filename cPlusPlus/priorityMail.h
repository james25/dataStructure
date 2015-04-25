/*
 * priorityMail.h
 *
 *  Created on: Apr 25, 2015
 *      Author: james
 */

#ifndef PRIORITYMAIL_H_
#define PRIORITYMAIL_H_

#include "mail.h"


enum Zone { national, international};

class PriorityMail : public Mail
{
protected:
	bool urgent;
	Zone area;
	double weight,price;
public:
	PriorityMail(Zone z, double w, bool urg);
	PriorityMail();
	friend istream& operator>>(istream &is, PriorityMail &p);
	friend istream& operator>>(istream &is, PriorityMail *p);
	friend ostream& operator<<(ostream &os, PriorityMail *p); // for test
	double calculatePostage(); //succeed
	void seePostage();
};
#endif /* PRIORITYMAIL_H_ */
