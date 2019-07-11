#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std;

void outF()
{
    char q = 34;
    char c = 44;
    string s []= {"#include <iostream>",
                  "#include <fstream>",
                  "#include <string>",
                  "using namespace std;",
                  "void outF(){",
                  "char q = 34;",
                  "char c = 44;",
                  "string s []={",
                  "};",
                  "ofstream f;",
                  "f.open(text/test);",
                  "for (int i = 0; i < 8; i++) {",
                  "f << s[i] << endl;",
                  "}",
                  "for (string a : s) {",
                  "f << q << a << q << c << endl;",
                  "}",
                  "s[10].insert(7, 1, q);",
                  "s[10].insert(16, 1, q);",
                  "for (int i = 8; i < 28; i++) {",
                  "f << s[i] << endl;",
                  "}",
                  "f.close();",
                  "}",
                  "int main(){",
                  "outF();",
                  "return 0;",
                  "}"};
               
    ofstream f;

    f.open("text/test");
    for (int i = 0; i < 8; i++) {
        f << s[i] << endl;
    }
    for (string a : s) {
        f << q << a << q << c << endl;
    }
    s[10].insert(7, 1, q);
    s[10].insert(17, 1, q);
    for (int i = 8; i < 28; i++) {
        f << s[i] << endl;

    }
    f.close();
}

int main() 
{
    outF();
    return 0;
}

