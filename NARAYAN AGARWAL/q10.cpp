#include <iostream>
using namespace std;

int main()
{
    char line[150];
    int alpha, digits, sc;

    alpha= digits = sc = 0;

    cout << "Enter a line of string: ";
    cin.getline(line, 150);
    for(int i = 0; line[i]!='\0'; ++i)
    {
        if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++alpha;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            ++digits;
        }
        else 
        {
            ++sc;
        }
    }

    cout << "aplhabets: " << alpha << endl;
    cout << "Digits: " << digits << endl;
    cout << "special character: " << sc << endl;

    return 0;
}