no. 13

#include <iostream>
#include <math.h>
using namespace std;

void distance (float x1, float y1,float z1, float x2, float y2, float z2){
	float dx = sqrt(pow(x2 - x1, 2) +
				pow(y2 - y1, 2) +
				pow(z2 - z1, 2) * 1.0);
	cout << " distance : " << dx;
	return;
}

int main(){
	float x1 = 5, y1 = 6, z1 = 8, x2 = 10, y2 = 12, z2 = 30;
	distance(x1, y1, z1,
			x2, y2, z2);
	return 0;
}
