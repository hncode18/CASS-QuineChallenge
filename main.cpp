#include <iostream> 
#include <fstream> 
#include <string> 
#include <thread>
using namespace std;

void outF(string n)
{
    char q = 34;
    char c = 44;
    string s []= {"#include <iostream>",
                  "#include <fstream>",
                  "#include <string>",
                  "#include <thread>",
                  "using namespace std;",
                  "void outF(string n){",
                  "char q = 34; char c = 44;",
                  "string s []={",
                  "};",
                  "ofstream f(text/test + n);",
                  "for (int i = 0; i < 8; i++) { f << s[i] << endl; }",
                  "for (string a : s) { f << q << a << q << c << endl; }",
                  "s[9].insert(11, 1, q); s[9].insert(21, 1, q);",
                  "for (int i = 8; i < 23; i++) { f << s[i] << endl; } }",
                  "void loop(char j){ for (int i = 0; i < 187500; i++) { outF(j + to_string(i)); } }",
                  "int main(){",
                  "loop(100);",
                  "thread t1(loop, 97); thread t2(loop, 98); thread t3(loop, 99);",
                  "t1.join(); t2.join(); t3.join();",
                  "return 0;}"};
               
    ofstream f("text/test" + n);

    for (int i = 0; i < 8; i++) {
        f << s[i] << endl;
    }
    for (string a : s) {
        f << q << a << q << c << endl;
    }
    s[9].insert(11, 1, q);
    s[9].insert(21, 1, q);
    for (int i = 8; i < 20; i++) {
        f << s[i] << endl;
    }
}

void loop(char j)
{
    for (int i = 0; i < 187500; i++) {
        outF(j + to_string(i));
    }
}


int main() 
{
    loop(100);
    thread t1(loop, 97);
    thread t2(loop, 98);
    thread t3(loop, 99);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}