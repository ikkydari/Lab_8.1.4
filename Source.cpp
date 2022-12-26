#include <iostream>
#include <string>
using namespace std; // !!!!!!!!!!!!!!!!!!!!! 1.4 завдання
int Count(const string s)
{
    bool isI = false;
    size_t i = 0;
    while ((i = s.find('n', i)) != -1)
    {
        i++;
        if (s[i + 1] == 'o')
            isI = true;
    }
    return isI;
}
string Change(string& s)
{
    size_t pos = 0;
    while ((pos = s.find('n', pos)) != -1)
        if (s[pos + 2] == 'o')
            s.replace(pos, 3, "**");
    return s;
}
int main()
{
    string str;
    cout << "Enter string:" << endl;  //enter divide into parts as example
    getline(cin, str);
    Count(str) ? cout << "Such i exists" : cout << "Such i doesn't exist";
    string dest = Change(str);
    cout << "\nModified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}