#include "Dairy.h"

Dairy::Dairy()
{
	Book[Date()].push_back("C++");
	Book[Date()].push_back("Film");
	Book[Date()+1].push_back("C++");
	Book[Date() -2].push_back("JS");
	Book[Date() +5].push_back("JS");
	Book[Date() - 2].push_back("Shoping");
}

void Dairy::showInfo() const
{
	if (Book.size() == 0)
	{
		cout << "Book is empty" << endl;
	}
	else {
		map<Date, vector<string>>::const_iterator item;
		for (item = Book.begin(); item != Book.end();item++) {
			cout << item->first << endl;
			for (auto text : item->second)
			{
				cout << "\t" << text << endl;
			}
		}
	}


}

void Dairy::addEvent(Date d, string text)
{
	Book[d].push_back(text);
}

void Dairy::findEvent(Date d)
{
	map<Date, vector<string>>::iterator item = Book.find(d);
	if (item == Book.end())
	{
		cout << "Not findet"<<endl;
	}
	else {
		cout << item->first << endl;
		for (auto text : item->second)
		{
			cout << "\t" << text << endl;
		}
	}
}

void Dairy::delEvent(Date d, int number)
{
	map<Date, vector<string>>::iterator item = Book.find(d);
	if (item == Book.end())
	{
		cout << "Not findet" << endl;
	}
	else {
		if (number > item->second.size())
		{
			cout << "Event not found" << endl;
		}
		else 
		{
			item->second.erase(item->second.begin() + number);
			if (item->second.size() == 0) 
			{
				Book.erase(d); 
			}
		}
	}
}
