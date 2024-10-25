#pragma once
#include <string>
#include <map>
using namespace std;
class Dictionary
{
	map<string, string> dict;
	
public:
	Dictionary();
	void AddWord();
	void DeleteWord();
	void SearchWord();
	void SaveToFile(const string& filename);
	void Print();

};

