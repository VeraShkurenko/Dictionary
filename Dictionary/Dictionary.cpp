#include "Dictionary.h"
#include <iostream>
#include <fstream>

using namespace std;

Dictionary::Dictionary()
{
    dict.insert(make_pair("dog", "собака"));
    dict.insert(make_pair("cat", "кішка"));
    dict.insert(make_pair("parrot", "папуга"));
}

void Dictionary::AddWord()
{
    string word, translation;
    cout << "Введіть слово англійською -> ";
    cin >> word;
    cout << "Введіть переклад -> ";
    cin >> translation;
    dict.insert(make_pair(word, translation));
    cout << "Слово додано.\n";
}

void Dictionary::DeleteWord()
{
    string word;
    cout << "Введіть слово для видалення -> ";
    cin >> word;
    auto it = dict.find(word);
    if (it != dict.end()) {
        dict.erase(it);
        cout << "Слово видалено.\n";
    }
    else {
        cout << "Слово не знайдено.\n";
    }
}

void Dictionary::SearchWord()
{
    string word;
    cout << "Введіть слово для пошуку -> ";
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
        cout << "Переклад не знайдено.\n";
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
        cout << "Словник збережено у файл.\n";
    }
    else
    {
        cout << "Не вдалося відкрити файл.\n";
    }
}

void Dictionary::Print()
{
    for (const auto& entry : dict) 
    {
        cout << entry.first << " - " << entry.second << endl;
    }
}
