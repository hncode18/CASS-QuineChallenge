char s[]=R"(char s[]=R"(%s%c";
#include<cstdio>
#include<thread>
#define tc(n,e) std::thread n (p,e);
#define w(n) n.join();
void p(int a) {char n[8];for(int i=0;i<93750;i++){itoa(a*93750+i,n,10);FILE *f=fopen(n,"w");fprintf(f,z);fclose(f);}}
int main(){p(7);tc(t1,0)tc(t2,1)tc(t3,2)tc(t4,3)tc(t5,4)tc(t6,5)tc(t7,6)w(t1)w(t2)w(t3)w(t4)w(t5)w(t6)w(t7)})";
#include<cstdio>
#include<thread>
#define tc(n,e) std::thread n (p,e);
#define w(n) n.join();
void p(int a) {char n[8];for(int i=0;i<93750;i++){itoa(a*93750+i,n,10);FILE *f=fopen(n,"w");fprintf(f,s,s,41);fclose(f);}}
int main(){p(7);tc(t1,0)tc(t2,1)tc(t3,2)tc(t4,3)tc(t5,4)tc(t6,5)tc(t7,6)w(t1)w(t2)w(t3)w(t4)w(t5)w(t6)w(t7)}