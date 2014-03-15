#pragma once

#include <string>
#include <vector>

#include "RouterDirection.h"

class ChessBoard
{
private:
	ChessBoard(void);
	~ChessBoard(void);

public:
	static ChessBoard& getInstance();
	std::string getPos(const std::string& strPos,RouterDirection direction);
	bool isInverse(char chessColor, char otherChessColor);
	bool isOutOfBoard(const std::string& strPos);
	bool exist(std::vector<RouterDirection>& directions, RouterDirection direction);

private:
	static std::vector<RouterDirection> m_leftDirections;
	static std::vector<RouterDirection> m_upDirections;
	static std::vector<RouterDirection> m_rightDirections;
	static std::vector<RouterDirection> m_downDirections;
};