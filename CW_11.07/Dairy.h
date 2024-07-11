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


};

