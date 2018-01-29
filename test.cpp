#include <cstdio>
#include <iostream>
#include "Point3D.hpp"  // Or import from another file
using namespace std;

// struct Point3D 
// {
// 	int x;
// 	int y;
// 	int z;
// };

int main(void) {
	// Point3D p;
	// Point3D* q;
	// p.x = 5;
	// p.y = -2;
	// p.z = 999;
	// cout << p.x << endl;
	// q = &p;
	// q -> x = 1000;
	// cout << (*q).x << endl;
	// or use arrow operator q->x 
	// Since q is pointing to a struct, it cannot print it

	Point3D point(1, 2, 3);
	cout << point.x << " " << point.y;
	cout << " " << point.z << endl;
	Point3D orig;
	cout << orig.x << " " << orig.y;
	cout << " " << orig.z << endl;

	cout << "-----------" << endl;

	Point3D* p = new Point3D(7, 7, 7);
	cout << p->x << " " << p->y;
	cout << "" << p->z << endl;

	delete p;
	cout << &point << endl;
	Point3D* test = &point;
	test = NULL;
	Point3D* lol = 
	cout << test->x << endl;


	return 0;

}