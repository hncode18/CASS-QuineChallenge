#include <iostream> 
#include <fstream> 
#include <string> 
#include <thread>
#define l(x, n) for (int i = x; i < n; i++)
#define p f << s[i] << endl;
#define in(x) s[12].insert(x,1,q);
using namespace std;

void outF(string n)
{
    char q = 34, c = 44;
    string s []= {"#include <iostream>", 
                  "#include <fstream>",
                  "#include <string>",
                  "#include <thread>",
                  "using namespace std;",
                  "#define l(x, n) for (int i = x; i < n; i++)",
                  "#define p f << s[i] << endl;",
                  "#define in(x) s[12].insert(x,1,q);",
                  "void outF(string n){",
                  "char q = 34, c = 44;",
                  "string s []={",
                  "};",
                  "ofstream f(text/test + n);",
                  "l(0, 11) { p }",
                  "for (string a : s) { f << q << a << q << c << endl; }",
                  "in(11) in(21)",
                  "l(11, 23) { p } }",
                  "void lo(char j){ l(0, 187500) { outF(j + to_string(i)); } }",
                  "int main(){",
                  "lo(100);",
                  "thread t1(lo, 97); thread t2(lo, 98); thread t3(lo, 99);",
                  "t1.join(); t2.join(); t3.join();",
                  "return 0;}"};
               
    ofstream f("text/test" + n);
    l(0, 11) { p }
    for (string a : s) {
        f << q << a << q << c << endl;
    }
    in(11) in(21)
    l(11, 23) { p }
}

void lo(char j)
{
    l(0, 187500) {
        outF(j + to_string(i));
    }
}

int main() 
{
    lo(100);
    thread t1(lo, 97);
    thread t2(lo, 98);
    thread t3(lo, 99);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}