#include "Dictionary.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

/*�� ������ �������, ����������� �������.������������� ���������������� :
1. �������� ����� � ���������
2. �������� � �������
3. �����
4. ���������� � ����, (���������)
5. ����� �� �������*/ 

int main()
{
    setlocale(0, "ukr");
    Dictionary myDict;
    int choice = -1;
    string filename = "slovnyk.txt";
    while (choice != 0) 
    {
        cout << "\n1. ������ �����\n";
        cout << "2. �������� �����\n";
        cout << "3. ����� �����\n";
        cout << "4. �������� ������� � ����\n";
        cout << "5. ������� �������\n";
        cout << "0. �����\n";
        cout << "������� �� -> ";
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
            cout << "����� � ��������.\n";
            break;
        default:
            cout << "������� ����.\n";
            break;
        }
    }
    return 0;
}
