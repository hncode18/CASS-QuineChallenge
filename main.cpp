char s [12][200]= {
"char s [12][200]={",
"};",
"#include <fstream>",
"#include <thread>",
"#define l(x, n, d) for (int i = x; i < n; i++) {d;}",
"#define p(x) f << x << end;",
"#define tc(n, e) thread n (lo, e);",
"#define w(n) n.join();",
"using namespace std;",
"void outF(string n){char q = 34, c = 44; ofstream f(n); p(s[0]) l(0, 12, p(q << s[i] << q << c)) l(1, 12, p(s[i]))}",
"void lo(char j){l(0, 187500, outF(j + to_string(i)))}",
"int main(){lo(104);tc(t1, 97) tc(t2, 98) tc(t3, 99) tc(t4, 100) tc(t5, 101) tc(t6, 102) tc(t7, 103) w(t1) w(t2) w(t3) w(t4) w(t5) w(t6) w(t7)}"
};
#include <fstream> 
#include <thread>
#define l(x, n, d) for (int i = x; i < n; i++) {d;}
#define p(x) f << x << endl;
#define tc(n, e) thread n (lo, e);
#define w(n) n.join();
using namespace std;
void outF(string n){char q = 34, c = 44; ofstream f(n); p(s[0]) l(0, 12, p(q << s[i] << q << c)) l(1, 12, p(s[i]))}
void lo(char j){l(0, 125, outF(j + to_string(i)))}
int main(){lo(104);tc(t1, 97) tc(t2, 98) tc(t3, 99) tc(t4, 100) tc(t5, 101) tc(t6, 102) tc(t7, 103) w(t1) w(t2) w(t3) w(t4) w(t5) w(t6) w(t7)}