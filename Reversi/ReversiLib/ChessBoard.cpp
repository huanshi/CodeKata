#include "ChessBoard.h"

#include <algorithm>

std::vector<RouterDirection> ChessBoard::m_leftDirections;
std::vector<RouterDirection> ChessBoard::m_upDirections;
std::vector<RouterDirection> ChessBoard::m_rightDirections;
std::vector<RouterDirection> ChessBoard::m_downDirections;

ChessBoard::ChessBoard(void)
{
	ChessBoard::m_leftDirections.push_back(LEFT);
	ChessBoard::m_leftDirections.push_back(LEFT_DOWN);
	ChessBoard::m_leftDirections.push_back(LEFT_UP);

	ChessBoard::m_upDirections.push_back(LEFT_UP);
	ChessBoard::m_upDirections.push_back(RIGHT_UP);
	ChessBoard::m_upDirections.push_back(UP);

	ChessBoard::m_rightDirections.push_back(RIGHT);
	ChessBoard::m_rightDirections.push_back(RIGHT_DOWN);
	ChessBoard::m_rightDirections.push_back(RIGHT_UP);

	ChessBoard::m_downDirections.push_back(DOWN);
	ChessBoard::m_downDirections.push_back(LEFT_DOWN);
	ChessBoard::m_downDirections.push_back(RIGHT_DOWN);
}

ChessBoard::~ChessBoard(void)
{
}

ChessBoard& ChessBoard::getInstance()
{
	static ChessBoard board;
	return board;
}

std::string ChessBoard::getPos(const std::string& strPos,RouterDirection direction)
{
	int iHorizon = 0;
	int iVertical = 0;
	std::string strResult = "XX";
	if (exist(m_leftDirections, direction))
	{
		iHorizon = -1;
	}
	else if (exist(m_rightDirections, direction))
	{
		iHorizon = 1;
	}

	if (exist(m_upDirections, direction))
	{
		iVertical = -1;
	}
	else if (exist(m_downDirections, direction))
	{
		iVertical = 1;
	}

	strResult[0] = strPos[0] + iHorizon;
	strResult[1] = strPos[1] + iVertical;
	if (isOutOfBoard(strResult))
	{
		strResult = "XX";
	}
	return strResult;
}

bool ChessBoard::isInverse(char chessColor, char otherChessColor)
{
	return (chessColor == 'B' && otherChessColor == 'W' ) 
		|| (chessColor == 'W' && otherChessColor == 'B' ) ;
}

bool ChessBoard::isOutOfBoard(const std::string& strPos)
{
	return strPos[0] < 'A' || 
			strPos[0] > 'H'||
			strPos[1] < '1'|| 
			strPos[1] > '8';
}

bool ChessBoard::exist(std::vector<RouterDirection>& directions, RouterDirection direction)
{
	return std::find(directions.begin(), directions.end(), direction) != directions.end();
}