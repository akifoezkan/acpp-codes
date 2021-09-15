#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main()
{
	using namespace std;
	ifstream ifs{ "myfile.txt" }; 
	if (!ifs) {
		cerr << "cannot open file!";
		return 1;
	}

	string sline;
	vector<string> svec;

	//asagidaki dongude moved-from durumundaki nesne tekrar kullaniliyor

	while (getline(ifs, sline))
		svec.push_back(move(sline));

	//...
}
