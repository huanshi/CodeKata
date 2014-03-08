#include "ChessChecker.h"
#include "ChessBoard.h"
#include "LeftRouter.h"
#include "RightRouter.h"
#include "UpRouter.h"
#include "DownRouter.h"
#include "LeftUpRouter.h"
#include "RightUpRouter.h"
#include "LeftDownRouter.h"
#include "RightDownRouter.h"

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

bool ChessChecker::canPlaceThroughLeft(char color,const std::string& strPos)
{
	LeftRouter router;
	return canPlace(router, color, strPos);
}

bool ChessChecker::canPlaceThroughRight(char color,const std::string& strPos)
{
	RightRouter router;
	return canPlace(router, color, strPos);
}

bool ChessChecker::canPlaceThroughUp(char color,const std::string& strPos)
{
	UpRouter router;
	return canPlace(router, color, strPos);
}

bool ChessChecker::canPlaceThroughDown(char color,const std::string& strPos)
{
	DownRouter router;
	return canPlace(router, color, strPos);
}

bool ChessChecker::canPlaceThroughLeftUp(char color,const std::string& strPos)
{
	LeftUpRouter router;
	return canPlace(router, color, strPos);
}

bool ChessChecker::canPlaceThroughRightUp(char color,const std::string& strPos)
{
	RightUpRouter router;
	return canPlace(router, color, strPos);
}

bool ChessChecker::canPlace(RouterDirection direction, char color,const std::string& strPos)
{
	switch (direction)
	{
	case RIGHT_UP:
		return canPlaceThroughRightUp(color, strPos);
		break;
	case LEFT_UP:
		return canPlaceThroughLeftUp(color, strPos);
		break;
	case DOWN:
		return canPlaceThroughDown(color, strPos);
		break;
	case UP:
		return canPlaceThroughUp(color, strPos);
		break;
	case RIGHT:
		return canPlaceThroughRight(color, strPos);
		break;
	case LEFT:
		return canPlaceThroughLeft(color, strPos);
		break;
	case LEFT_DOWN:
		{
			LeftDownRouter router;
			return canPlace(router, color, strPos);
		}
		break;
	case RIGHT_DOWN:
		{
			RightDownRouter router;
			return canPlace(router, color, strPos);
		}
		break;
		
	}

	return false;
}


bool ChessChecker::canPlace(AbstractRouter& router, char color, const std::string& strPos)
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

	if((color == 'B' && !isWhite(currentPos)) ||
		(color == 'W' && !isBlack(currentPos)))
	{
		return false;
	}

	currentPos = router.forward(currentPos);
	while(!isOutBorder(currentPos))
	{
		if(isEmpty(currentPos))
		{
			return false;
		}
		else if((color == 'B' && isBlack(currentPos))
			|| (color == 'W' && isWhite(currentPos)))
		{
			return true;
		}

		currentPos = router.forward(currentPos);
	}

	return false;
}


bool ChessChecker::isOutBorder(const std::string& strPos)
{
	return strPos == "XX";
}