#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES 
using namespace std;
int main() {
	int a;
	cin>>a;
	if (a>=1 && a<=12) {
		switch(a){
		
		case 12: case 1: case 2: cout<<"Winter";
		break;
		case 3: case 4: case 5: cout<<"Spring";
		break;
		case 6: case 7: case 8: cout<<"Summer";
		break;
		case 9:case 10: case 11: cout<<"Autumn";
		break; 	
		}
	}
	return 0;
}
