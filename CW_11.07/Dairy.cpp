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
		for (auto item : Book) {
			cout << item.first << endl;

		}
	}
}
