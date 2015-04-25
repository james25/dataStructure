/*
 * main.cpp
 *
 *  Created on: Apr 25, 2015
 *      Author: james
 */
#include "data.h"
#include "mail.h"
#include "priorityMail.h"


int main()
{
	Mail* list[15]; //array of Mail pointers of the class
	int opc,num=0;
	int idx=0;
	while(1){
		opc = Menu();
		if (opc==1){
			//declare a Mail and add to the List
			list[num] = new Mail[1];
			//list[num] = (Mail *)malloc(1);
//			delete_array[num] = 1;
			cin>>list[num];
			num++;

		}

		else if(opc== 2){
       //declare a Priority Mail and add to the List

			PriorityMail *temp = new PriorityMail(national,0,0);
			cin>>temp;
			list[num] = temp;
			num++;
		}


		else if(opc== 3){
			//Print all data in list
			for(idx = 0; idx <num; idx++){
				cout<<"Mail nr:"<<idx<<endl;
				list[idx]->seePostage();
			}
		}


		else if(opc== 4){
			//free memory and exit
			for(idx = 0; idx < num; idx++){
				cout<<"deleting"<<idx<<"th object"<<endl;
				delete list[idx];
			}
			num = 0;
			cout <<"Program ended with exit code: 0"<<endl;
		}


	} //end of while

}



