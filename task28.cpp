#include <iostream>
using namespace std;
int main(){
	double a, b;
	cin>>a>>b;
	double s= a, ss = a;
	for(int i = 0; i<5; i++){
		s = s + a *(b/100);// ������� �������
		ss = ss * (b/100+1);//������� �������
	}
	cout<<s<<" "<<ss;
}
