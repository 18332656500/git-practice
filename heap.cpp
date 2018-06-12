#include <iostream>
using namespace std;
int read(){
	char ch=getchar();
    int a=0,t=1;
    while(ch<'0'||ch>'9') {if(ch=='-') t=-1;ch=getchar();}
    while(ch<='9'&&ch>='0') {a=a*10+ch-'0';ch=getchar();}
    return a*t;
}
int main(){
	freopen("/Users/zhaohaibo/Desktop/test.txt","r",stdin);
	int a[10];
	for(int i=0;i<5;i++){
		a[i] = read();
	}
	auto it=a;
	for(;it!a+6;it++)
		cout<<*it;
}