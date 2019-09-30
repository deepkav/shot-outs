//program on counting number of blank spaces in a given file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("OUT.TXT");  //while running the program check whether OUT.txt file is in current directory
	char ch;
	int count=0;
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch==' ')
		count++;
		
	}
	cout<<"Number of blank spaces in file OUT.txt are:"<<count;
	fin.close();
	return 0;
}
