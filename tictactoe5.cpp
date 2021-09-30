#include <iostream>
#include "tictactoe5.h"
#include<string>
#include<cstring>

#include<cctype>
using namespace std;

tictactoe5::tictactoe5()
{
	m_strTicTacToe = "";
	m_strWhoWins = "";
}

tictactoe5::~tictactoe5()
{
	
}

int tictactoe5::Count(string s, char c)
{
		// Count variable 
		int res = 0;
		//string s;
		//char c;
		for (int i = 0; i < s.size(); i++)
		{

			// checking character in string 
			if (s[i] == c)
				res++;
		}

		return res;
}

string tictactoe5::GetWhoWins()
{
	return m_strWhoWins;
}

void tictactoe5::setPosition(string input)
{
	m_strTicTacToe = input;

	Validation();

}

int tictactoe5::Validation()
{
	size_t len, flag1, flag2, flag3;

	for (string::size_type i = 0; i < m_strTicTacToe.length(); i++)
	{
		m_strTicTacToe[i] = toupper(m_strTicTacToe[i]);
	}

	for (int i = 0; i < 9; i++)
	    {
		if ((m_strTicTacToe[i] == 'X') || (m_strTicTacToe[i] == 'O') || (m_strTicTacToe[i] == 'E'))
		{
			flag1 = 1;
			//cout<<"flag1="<<flag1;
		}
		else {
			flag1 = 0;
			// cout<<"flag1="<<flag1;
			//cout << "wrong character was given";
		}

	      }
		len = m_strTicTacToe.length();
		if (len == 9)
		{
			flag2 = 1;
			//cout<<"flag2="<<flag2;       
		   //cout << "correct in length";
		}
		else
		{
			flag2 = 0;
			//cout<<"flag2="<<flag2;
			cout << "error in length";
			cout << endl;
		}
		int d;
		d = (Count(m_strTicTacToe, 'X') - Count(m_strTicTacToe, 'O'));

		if (d == 1 || d == -1 || d == 0)
		{
			flag3 = 1;
			//cout<<"flag3="<<flag3;
				//cout << "valid play";
		}
		else {
			flag3 = 0;
			//cout<<"flag3="<<flag3;
			cout << "error in length of each player character";
			cout << endl;
		}

		if (flag1 == 1 && flag2 == 1 && flag3 == 1)
		{
			cout << "correct input";
			cout << endl;
			int i, j, count = 0;
			for (i = 0; i < 3; i++)
			{
				cout << '|';
				for (j = 0; j < 3; j++)
				{
					cout << m_strTicTacToe[j + count];
					cout << '|';
				}
				count = count + 3;
				cout << endl;
			}
		}
		else
		{
			cout << "wrong input";
		}
	
		if ((m_strTicTacToe[0] == 'X'&&m_strTicTacToe[2] == 'X'&&m_strTicTacToe[3] == 'X') ||
			(m_strTicTacToe[3] == 'X'&&m_strTicTacToe[4] == 'X'&&m_strTicTacToe[5] == 'X') ||
			(m_strTicTacToe[6] == 'X'&&m_strTicTacToe[7] == 'X'&&m_strTicTacToe[8] == 'X') ||
			(m_strTicTacToe[0] == 'X'&&m_strTicTacToe[3] == 'X'&&m_strTicTacToe[6] == 'X') ||
			(m_strTicTacToe[1] == 'X'&&m_strTicTacToe[4] == 'X'&&m_strTicTacToe[7] == 'X') ||
			(m_strTicTacToe[2] == 'X'&&m_strTicTacToe[5] == 'X'&&m_strTicTacToe[8] == 'X') ||
			(m_strTicTacToe[0] == 'X'&&m_strTicTacToe[4] == 'X'&&m_strTicTacToe[8] == 'X') ||
			(m_strTicTacToe[2] == 'X'&&m_strTicTacToe[4] == 'X'&&m_strTicTacToe[6] == 'X'))
		{
			cout << "X win";
			cout << endl;
		}
		else if ((m_strTicTacToe[0] == 'O'&&m_strTicTacToe[2] == 'O'&&m_strTicTacToe[3] == 'O') ||
			(m_strTicTacToe[3] == 'O'&&m_strTicTacToe[4] == 'O'&&m_strTicTacToe[5] == 'O') ||
			(m_strTicTacToe[6] == 'O'&&m_strTicTacToe[7] == 'O'&&m_strTicTacToe[8] == 'O') ||
			(m_strTicTacToe[0] == 'O'&&m_strTicTacToe[3] == 'O'&&m_strTicTacToe[6] == 'O') ||
			(m_strTicTacToe[1] == 'O'&&m_strTicTacToe[4] == 'O'&&m_strTicTacToe[7] == 'O') ||
			(m_strTicTacToe[2] == 'O'&&m_strTicTacToe[5] == 'O'&&m_strTicTacToe[8] == 'O') ||
			(m_strTicTacToe[0] == 'O'&&m_strTicTacToe[4] == 'O'&&m_strTicTacToe[8] == 'O') ||
			(m_strTicTacToe[2] == 'O'&&m_strTicTacToe[4] == 'O'&&m_strTicTacToe[6] == 'O'))
		{
			cout << "o wins";
			cout << "endl";
		}
		else {
			cout << "tie";
			cout << endl;
		}
		
			
			return 0;
		}


	




