#include <iostream>
#include <fstream>
#include "vec3.h"
using namespace std;

int main()
{
	int nx = 200;
	int ny = 100;

	ofstream ppmFile;
	ppmFile.open ("helloworld.ppm");

	ppmFile << "P3\n" << nx << " " << ny << "\n255\n";
	for (int j = ny - 1; j >= 0; j--) {
		for (int i = 0; i < nx; i++) {
			vec3 col(float(i) / float(nx), float(j) / float(ny), 0.2);
			int ir = int(255.99 * col[0]);
			int ig = int(255.99 * col[1]);
			int ib = int(255.99 * col[2]);
			ppmFile << ir << " " << ig << " " << ib << "\n";
		}
	}
	ppmFile.close();
	return 0;
}