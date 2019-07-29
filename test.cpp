char s[]=R"(char n[]=R"(%s%c";
char n[8];char z[850];
#include<cstdio>
#include<thread>
#define tc(n,e) std::thread n (l,e);
#define w(n) n.join();
void p() {FILE *f = fopen(n, "w");fprintf(f,z);fclose(f);}
void l(int a) {for (int i = 0; i < 125; i++){sprintf(n,"%d.txt",a*125+i);p();}}
int main(){sprintf(z,s,s,41);l(7);tc(t1,0)tc(t2,1)tc(t3,2)tc(t4,3)tc(t5,4)tc(t6,5)tc(t7,6)w(t1)w(t2)w(t3)w(t4)w(t5)w(t6)w(t7)})";
char n[8];char z[850];
#include<cstdio>
#include<thread>
using namespace std;
#define tc(n,e) std::thread n (l,e);
#define w(n) n.join();
void p() {FILE *f = fopen(n, "w");fprintf(f, z);fclose(f);}
void l(int a) {for (int i = 0; i < 125; i++){sprintf(n,"%d.txt",a*125+i);p();}}
int main(){sprintf(z,s,s,41);l(7);tc(t1,0)tc(t2,1)tc(t3,2)tc(t4,3)tc(t5,4)tc(t6,5)tc(t7,6)w(t1)w(t2)w(t3)w(t4)w(t5)w(t6)w(t7)}