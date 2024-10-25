#include "Dictionary.h"
#include <iostream>
#include <fstream>

using namespace std;

Dictionary::Dictionary()
{
    dict.insert(make_pair("dog", "������"));
    dict.insert(make_pair("cat", "����"));
    dict.insert(make_pair("parrot", "������"));
}

void Dictionary::AddWord()
{
    string word, translation;
    cout << "������ ����� ���������� -> ";
    cin >> word;
    cout << "������ �������� -> ";
    cin >> translation;
    dict.insert(make_pair(word, translation));
    cout << "����� ������.\n";
}

void Dictionary::DeleteWord()
{
    string word;
    cout << "������ ����� ��� ��������� -> ";
    cin >> word;
    auto it = dict.find(word);
    if (it != dict.end()) {
        dict.erase(it);
        cout << "����� ��������.\n";
    }
    else {
        cout << "����� �� ��������.\n";
    }
}

void Dictionary::SearchWord()
{
    string word;
    cout << "������ ����� ��� ������ -> ";
    cin >> word;
    auto it = dict.find(word);
    if (it != dict.end()) 
    {
        system("cls");
        system("color 0B");
        cout << word << " - " << it->second << endl;
    }
    else
    {
        system("cls");
        system("color 0C");
        cout << "�������� �� ��������.\n";
    }
}

void Dictionary::SaveToFile(const string& filename)
{
    ofstream file(filename);
    if (file.is_open())
    {
        for (const auto& entry : dict) 
        {
            file << entry.first << " - " << entry.second << endl;
        }
        file.close();
        cout << "������� ��������� � ����.\n";
    }
    else
    {
        cout << "�� ������� ������� ����.\n";
    }
}

void Dictionary::Print()
{
    for (const auto& entry : dict) 
    {
        cout << entry.first << " - " << entry.second << endl;
    }
}
