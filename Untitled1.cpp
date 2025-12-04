#include <iostream>
using namespace std;
// The following are a gloable variable ok!
int c = 45;
int main()
{
	//********************* Built in data types ******************
	//	int a, b, c;
	//	cout<<"Enter the value of a : ";
	//	cin>>a;
	//	cout<<"Enter the value of b : ";
	//	cin>>b;
	//	// the following are used arithemetic operator
	//	c=a+b;
	//	cout<<"The SUM  of a and b is "<<c<<endl;
	//	// :: these double colon are called scope resolution
	//	// the following method of writing gloable scope
	//	cout<<"This is the gloable scope "<<::c;

	//********************* floatr, double, long double Litralse ******************
	//
	//	float d=34.4F;
	//	long double e=34.4L;
	//	cout<<"The vlaue of d is "<<d<<endl<<"The value of e is "<<e;
	//	cout<<"\nThe size of 34.55 is "<<sizeof(34.4)<<endl;
	//	cout<<"The size of 34.55f is "<<sizeof(34.4f)<<endl;
	//	cout<<"The size of 34.55F is "<<sizeof(34.4F)<<endl;
	//	cout<<"The size of 34.55l is "<<sizeof(34.4l)<<endl;
	//	cout<<"The size of 34.55L is "<<sizeof(34.4L)<<endl;

	//********************* Reference Variable ******************

	// maan lo kay aik admi hay jis ka naam hay tausif urrehman
	// laikin log osko koko boltay hain gar may tauif bolla jata hay aur school may codebytausif bollat jata hay insan aik hi hay laikin log os ko alllag allag naame say pukartay hain same it is reference variable
	// Example
	//	int x=455;
	//	int &y=x;
	//	cout<<x<<endl;
	//	cout<<y<<endl;

	//********************* Typecasting ******************
	// typecasting ka matlab hota hay kay aik datatype ko dosray datatype may convert ker dainaa
	int f = 34;
	float g = 34.5;
	cout << "The value of f is " << float(f) << endl;
	cout << "The value of f is " << (float)f << endl;

	cout << "The value of g is " << int(g) << endl;
	cout << "The value of g is " << (int)g << endl;

	cout << "The expression is " << f + (int)g << endl;
	cout << "The expression is " << f + g;

	return 0;
}