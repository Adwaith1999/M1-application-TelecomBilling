#include<Telecom.Billing.h>

int addrecords(char phonenumber,char name,float amount)
{
}
int listrecords(char phonenumber,char name,float amount)
{
}
int modifyrecords(char phonenumber,char name,float amount)
{
}
int deleterecords(char phonenumber,char name,float amount)
{
}
int searchrecords(char phonenumber,char name,float amount)
{
  if(strcmp(s.phonenumber,phonenumber)==0)
		{	
			printf( "Record Found");
			flag=0;
			break;
		}
		else if(flag==1)
		{	
			printf("Requested Phone Number Not found in our database");
		}
	}

float payment(char phonenumber,char name,float amount)
{
  amount = amount - rem amount;
  return amount;
}
