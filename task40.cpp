#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	int a;
	cin>>a;
	if (a>-10 && a<10) {
		cout<<a+5;
	}
	else {
		cout<<a-10;
	}
	return 0;
}
