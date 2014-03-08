#include "ChessBoard.h"


ChessBoard::ChessBoard(void)
{
}


ChessBoard::~ChessBoard(void)
{
}


std::string ChessBoard::getLeftPos(const std::string& strPos)
{
	std::string result = "XX";
	if (strPos[0] == 'A')
	{
		return result;
	}
	else
	{
		result[0] = strPos[0] - 1;
		result[1] = strPos[1];
		return result;
	}
}
std::string ChessBoard::getRightPos(const std::string& strPos)
{
	std::string result = "XX";
	if (strPos[0] == 'H')
	{
		return result;
	}
	else
	{
		result[0] = strPos[0] + 1;
		result[1] = strPos[1];
		return result;
	}
}

std::string ChessBoard::getUpPos(const std::string& strPos)
{
	std::string result = "XX";
	if (strPos[1] == '1')
	{
		return result;
	}
	else
	{
		result[0] = strPos[0];
		result[1] = strPos[1] - 1;
		return result;
	}
}
std::string ChessBoard::getDownPos(const std::string& strPos)
{
	std::string result = "XX";
	if (strPos[1] == '8')
	{
		return result;
	}
	else
	{
		result[0] = strPos[0];
		result[1] = strPos[1] + 1;
		return result;
	}
}

std::string ChessBoard::getLeftUpPos(const std::string& strPos)
{
	std::string result = "XX";
	if (strPos[1] == '1' || strPos[0] == 'A')
	{
		return result;
	}
	else
	{
		result[0] = strPos[0] - 1;
		result[1] = strPos[1] - 1;
		return result;
	}
}

std::string ChessBoard::getRightUpPos(const std::string& strPos)
{
	std::string result = "XX";
	if (strPos[0] == 'H' || strPos[1] == '1')
	{
		return result;
	}
	else
	{
		result[0] = strPos[0] + 1;
		result[1] = strPos[1] - 1;
		return result;
	}
}

std::string ChessBoard::getLeftDownPos(const std::string& strPos)
{
	std::string result = "XX";
	if (strPos[0] == 'A' || strPos[1] == '8')
	{
		return result;
	}
	else
	{
		result[0] = strPos[0] - 1;
		result[1] = strPos[1] + 1;
		return result;
	}
}

std::string ChessBoard::getRightDownPos(const std::string& strPos)
{
	std::string result = "XX";
	if (strPos[0] == 'H' || strPos[1] == '8')
	{
		return result;
	}
	else
	{
		result[0] = strPos[0] + 1;
		result[1] = strPos[1] + 1;
		return result;
	}
}

bool ChessBoard::isInverse(char chessColor, char otherChessColor)
{
	return (chessColor == 'B' && otherChessColor == 'W' ) 
		|| (chessColor == 'W' && otherChessColor == 'B' ) ;
}