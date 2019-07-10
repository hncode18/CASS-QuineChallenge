#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    ifstream fin("main.cpp");
    ofstream fout;

    while (fin >> s1) {
        s2 += s1;
    }
    for (int i = 0; i < 100; i++) {
        s1 = "text/test" + to_string(i) + ".txt";
        fout.open(s1);
        fout << s2;
        fout.close();
    }
    return 0;
}