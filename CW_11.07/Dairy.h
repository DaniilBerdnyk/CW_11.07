#pragma once
#include<vector>
#include<string>
#include<iostream>
#include<map>
#include"Date.h"

using namespace std;
class Dairy
{
	map<Date, vector<string>> Book;
public:
	Dairy();
	void showInfo()const;

	void addEvent(Date d , string text);
	void findEvent(Date d);
	void delEvent(Date d, int number);
};

