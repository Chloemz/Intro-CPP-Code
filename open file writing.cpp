//Name: Chloe Zambrano

//This Program opens file hello.txt, enters msg “Hello, World!”,
//saves&closes file. Opens same file again. Reads msg into string variable & prints it.
//ifstream is input, ofstream is output, fstream is both
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream out("hello.txt");
	out << "Hello, World!";
	out.close();

	ifstream in("hello.txt");
	string name;
	getline(in, name);
	cout << name;
	in.close();
	    
	return 0;
	
}
