#include"tictactoe5.h"
#include<iostream>
#include<string>
#include<fstream>
#include <windows.h>

using namespace std;

void main()
{
	tictactoe5 ttt;
	string output;
	
	ifstream fin("C:\\Users\\PC\\source\\repos\\tictactoe5\\tictactoe5\\input.txt", std::ifstream::in);
	fin.open("C:\\Users\\PC\\source\\repos\\tictactoe5\\tictactoe5\\input.txt", std::ifstream::in);

	ofstream fout("C:\\Users\\PC\\source\\repos\\tictactoe5\\tictactoe5\\output.txt", std::ifstream::out);
	fout.open("C:\\Users\\PC\\source\\repos\\tictactoe5\\tictactoe5\\output.txt", std::ifstream::out);
	
	
	while (!fin.eof())
	{
		getline(fin, output);
		ttt.setPosition(output);

		cout << ttt.GetWhoWins() << "ttt ----------------" << endl;
		fout << ttt.GetWhoWins() << "ttt ----------------" << endl;
		
	}

	fin.close();
	fout.close();
}