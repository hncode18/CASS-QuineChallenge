#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str;
    ifstream fin("main.cpp");
    ofstream fout("text/test2.txt");

    while (getline(fin, str)) {
        fout << str + "\n";
    }
    return 0;
}