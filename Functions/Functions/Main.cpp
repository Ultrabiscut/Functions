#include <iostream>
using namespace std;

//function portotypes ("declare functions")
int RectArea(int length, int width);
int RectPerm(int length, int width);
int larger(int a, int b);

int main()
{
	int iArea, iPerm;
	iArea = RectArea(6, 5);
	iPerm = RectPerm(6, 5);
	cout << "Area 1 = " << iArea << endl;
	cout << "Permiter 1 = " << iPerm << endl;

	int iArea2, iPerm2;
	iArea2 = RectArea(2, 3);
	iPerm2 = RectPerm(2, 3);
	cout << "Area 2 = " << iArea2 << endl;
	cout << "Permiter 2 = " << iPerm2 << endl;

	//combined area
	int iTotal, iTotal2;
	iTotal = iArea + iArea2;
	iTotal2 = iPerm + iPerm2;
	cout << "Combined Area = " << iTotal << endl;
	cout << "Combined Perimeter = " << iTotal2 << endl;

	//determine which area is larger
	cout << "The larger area is: " << larger(iArea, iArea2) << endl;

	return 0;
}


//create functions after main()
int RectArea(int length, int width)
{
	int iArea;

	iArea = length * width;
	
	return iArea;
}


//write a function that calculates perimeter of a rectangle
int RectPerm(int length, int width)
{
	int iPerm;

	iPerm = length + length + width + width;

	return iPerm;
}

//write a function that returns the larger of two values
int larger(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;

}