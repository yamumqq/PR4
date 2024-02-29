#include <iostream>
#include <string> 
#include <algorithm> 
#include <random> 

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string a;
    int b;
    cout << "Напишите слово\n";
    cin >> a;
    cout << "Выберите действие:\n";
    cout << "1.Слово выводится задом наперед.\n";
    cout << "2.Вывести слово без гласных.\n";
    cout << "3.Вывести слово без согласных.\n";
    cout << "4.Рандомно раскидывать буквы заданного слова.\n";
    cin >> b;
    switch (b)
    {
    case 1:
    {
        string reversed = a;
        reverse(reversed.begin(), reversed.end());
        cout << "\n" << reversed;
        break;
    }
    case 2:
    {
        string remvowels = a;
        remvowels.erase(remove_if(remvowels.begin(), remvowels.end(), [](wchar_t c) { return wstring(L"aeiouyAEIOUY").find(c) != wstring::npos; }), remvowels.end());
        cout << "\n" << remvowels;
        break;
    }
    case 3:
    {
        string remconsonants = a;
        remconsonants.erase(remove_if(remconsonants.begin(), remconsonants.end(), [](wchar_t c) { return wstring(L"bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ").find(c) != wstring::npos; }), remconsonants.end());
        cout << "\n" << remconsonants;
        break;
    }
    case 4:
    {
        string shuffled = a;
        random_shuffle(shuffled.begin(), shuffled.end());
        cout << "\n" << shuffled;
        break;
    }

    default:
        break;
    }
}

