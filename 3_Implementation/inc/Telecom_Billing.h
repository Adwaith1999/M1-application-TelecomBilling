#ifndef __TELECOM_BILLING_H__
#define __TELECOM_BILLING_H__

#include<stdio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>

void addrecords();
void listrecords();
void modifyrecords();
void deleterecords();
void searchrecords();
void payment();

typedef struct subscriber
{
char phonenumber[20];
char name[50];
float amount;
}s;

#endif


