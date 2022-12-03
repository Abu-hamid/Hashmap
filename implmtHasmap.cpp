#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

    // creation;
    unordered_map<string, int> m;

    // insertion;
    // type 1;

    pair<string, int> p = make_pair("babbar", 2);
    m.insert(p);

    // type 2;

    pair<string, int> pair2("mera", 3);
    m.insert(pair2);

    // type 3;

    m["name"] = 4;

    // Searching;

    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    // cout<< m.at("unknownKey")<< endl;// this will produce an unwanted fault;
    // cout<<m["unknowKey"]<<endl;// this will create a new entry;

    // ******
    cout << m["unknowKey"] << endl; // this will run properly no any fault;
    cout << m.at("unknownKey") << endl;

    // size;

    cout << m.size() << endl;

    // to check present or not ;
    cout << m.count("mera") << endl;

    // erase;

    m.erase("mera");
    cout << m.size() << endl;

    // iterator;

    unordered_map<string, int>::iterator it = m.begin();

    while (it != m.end())
    {

        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}