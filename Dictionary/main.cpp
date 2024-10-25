#include "Dictionary.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

/*На основе примера, реализовать словарь.Предусмотреть функциональность :
1. Добавить слово с переводом
2. Удаление с поиском
3. Поиск
4. Сохранение в файл, (текстовый)
5. Вывод на консоль*/ 

int main()
{
    setlocale(0, "ukr");
    Dictionary myDict;
    int choice = -1;
    string filename = "slovnyk.txt";
    while (choice != 0) 
    {
        cout << "\n1. Додати слово\n";
        cout << "2. Видалити слово\n";
        cout << "3. Пошук слова\n";
        cout << "4. Зберегти словник у файл\n";
        cout << "5. Вивести словник\n";
        cout << "0. Вихід\n";
        cout << "Виберіть дію -> ";
        cin >> choice;

        switch (choice) 
        {
        case 1:
            myDict.AddWord();
            break;
        case 2:
            myDict.DeleteWord();
            break;
        case 3:
            myDict.SearchWord();
            break;
        case 4:
            myDict.SaveToFile(filename);
            break;
        case 5:
            myDict.Print();
            break;
        case 0:
            cout << "Вихід з програми.\n";
            break;
        default:
            cout << "Невірний вибір.\n";
            break;
        }
    }
    return 0;
}
