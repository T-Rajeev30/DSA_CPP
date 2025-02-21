#include <iostream>
#include <cctype>
#include <string>

using namespace std;
string removespace(string s)
{
    //traversing the string
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ' || s[i] == ',' || s[i] == ':' || s[i] == '!' )
        {
            //using in-built function to erase element
            s.erase(s.begin() + i);
            i--;
        }
    }
    return s ;
}
 

int main() {
    string mixedCase = "Hello World !";
    string lowerCase;
    for (char c : mixedCase) {
        lowerCase += tolower(c);
    }
    cout << lowerCase << endl; 

    char str1[]  = "gee k";
    cout << removespace(lowerCase) << endl ;

    return 0;
}

//Converting to lower case 


