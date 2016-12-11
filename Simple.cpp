#include <conio.h>
#include <iostream>
#include <fstream>

using namespace  std;

int N = 0, i = 0, n = 0;

bool Number(int n)
{
	if (n<1) return false;
	for (int i = 2;i*i <= n;++i)
		if (n%i == 0) return false;

	return true;
}

int main()
{
	setlocale(0, "");

	ifstream in("in.txt");
	in >> N;
	in.close();

	cout << "Working... " << endl;	

	ofstream out("out.txt"); 

	for (i = 0;i <= N;++i) {
		if (Number(i)){
			out << i << endl; 
		}
	}
		
	out.close(); 

	cout << "Check out.txt! " << endl;	

	system("pause");
    return 0;
}