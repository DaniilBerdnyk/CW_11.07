#include <iostream>
#include<string>
#include<map>
#include<vector>
#include"Dairy.h"

using namespace std;

int main()
{
    //string text;

    //std::map < string, int> count;

    //while (text != "stop"&&text !="STOP")
    //{
    //    cout << "Input word" << endl;
    //    cin >> text;
    //    if (text == "stop" || text == "STOP") { break; }
    //    if (count.find("text") == count.end())
    //    {
    //       // count.insert(pair<string, int>(text, 1));
    //        count[text] = 1;
    //    }
    //    else 
    //    {
    //        count[text]++;
    //    }
    //}
    //cout << "----------------------------" << endl;

    //map<string, int>::iterator item;

    //for (item = count.begin(); item != count.end(); item++)
    //{
    //    cout << item->first << " " << item->second << endl;
    //}

    Dairy Daniil;
    Daniil.showInfo();

    cout << "------------------------------------" << endl;

    Daniil.addEvent(Date() , "sleep");
    Daniil.showInfo();

    cout << "------------------------------------" << endl;

    Daniil.findEvent(Date());
    Daniil.findEvent(Date() - 50);

    cout << "------------------------------------" << endl;

    Daniil.delEvent(Date(), 0);
    Daniil.delEvent(Date()+1, 0);

    Daniil.showInfo();
}
