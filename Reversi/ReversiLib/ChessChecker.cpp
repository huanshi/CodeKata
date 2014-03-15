#include "ChessChecker.h"
#include "ChessBoard.h"

ChessChecker::ChessChecker(const std::string* chessBoard)
{
	m_pChessBoard = chessBoard;
}

ChessChecker::~ChessChecker(void)
{
}

bool ChessChecker::isEmpty(const std::string& strChessPos)
{
	return getChess(strChessPos) == '.';
}

bool ChessChecker::isWhite(const std::string& strChessPos)
{
	return getChess(strChessPos) == 'W';
}

bool ChessChecker::isBlack(const std::string& strChessPos)
{
	return getChess(strChessPos) == 'B';
}

char ChessChecker::getChess(const std::string& strChessPos)
{
	return m_pChessBoard[strChessPos[1] - '1'][strChessPos[0] - 'A'];
}

bool ChessChecker::canPlace(RouterDirection direction, char color,const std::string& strPos)
{
	Router router(direction);
	return  canPlace(router, color, strPos);
}

bool ChessChecker::canPlace(Router& router, char color, const std::string& strPos)
{	
	if(!isEmpty(strPos))
	{
		return false;
	}

	std::string currentPos = router.forward(strPos);
	if(isOutBorder(currentPos))
	{
		return false;
	}

	if( isEmpty(currentPos) || isSameColor(color, currentPos) )
	{
		return false;
	}
	
	while(!isOutBorder(currentPos))
	{
		currentPos = router.forward(currentPos);
		if(isEmpty(currentPos))
		{
			return false;
		}
		else if(isSameColor(color,currentPos))
		{
			return true;
		}
	}

	return false;
}


bool ChessChecker::isOutBorder(const std::string& strPos)
{
	return strPos == "XX";
}

bool ChessChecker::isSameColor(char color,std::string currentPos)
{
	return ((color == 'B' && isBlack(currentPos)) || 
		(color == 'W' && isWhite(currentPos)) ||
		color == '.' && isEmpty(currentPos));
}