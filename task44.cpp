#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	if (a!=10 && b!=10 && a%2==0) {
		cout<<a+b;
	}
	else {
		cout<<a*b;
	}
	return 0;
}
